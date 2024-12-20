---
layout: default
title: Synchronization
parent: Linux Kernel
nav_order: 1
---

# Synchronization

Symmetric Multiprocessing (SMP) is difficult to implement because it creates race conditions in the kernel if two processes run kernel functions that access the same memory locations.

In SMP, the kernel must implement synchronization primitives (e.g., spinlocks) to guarantee that only one processor executes a critical section.

The Linux kernel provides a family of syncrhonization methods that enable the
developers to write efficient race-free code.


### Use: Spin Locks vs Semaphores

| **Requirement**                       | **Recommended Lock**           |
| --------------------------------------| -------------------------------|
| Low overhead locking                  | Spin lock is preferred         |
| Short lock hold time                  | Spin lock is preferred         |
| Long lock hold time                   | Mutex / Semaphore is preferred |
| Need to lock from interrupt context   | Spin lock is required          |
| Need to sleep while holding lock      | Mutex / Semaphore is required  |

## Atomic Operations

**Atomic operations** provide instructions that execute atomically - without interruption. Atomicity ensures that instructions occur without interruption and
that they complete either in their entirety or not at all.

Atomic operations are the **foundation** on which other synchronization methods are built. A good exercise, is to implement the "complex" syncrhonization methods using atomic operations, i.e., built them from foundational concepts.

It is never possible for two atomic operations to occur on the same variable concurrently.

The kernel provides two sets of atomic operations - one that operates on integers
and another that operates on individual bits. These interfaces are implemented
on every architecture that Linux supports.

### Atomic Integer Operations

The atomic integer methods operate on a special data type, `atomic_t`.

```c
typedef struct {
    volatile int counter;
} atomic_t;
```

Operations are simple:

```c
atomic_t u = ATOMIC_INIT(0);    /* define u and initialize it to zero */
atomic_t v;                     /* define v with atomic_t 32-bits type */
atomic_t x;                     /* define x with atomic_t 64-bits type */

atomic_set(&v, 4);              /* v = 4 (atomically) */ 
atomic_add(2, &v);              /* v = v + 2 = 6 (atomically) */
atomic_inc(&v);                 /* v = v + 1 = 7 (atomically) */
```

All the operations implemented on a specific architecture can be found in `<asm/atomic.h>`.

A common use of atomic integer operations is to implement counters. Use `atomic_inc()` and `atomic_dec()`.

Atomic integer operators are used for atomically performing an operating and testing the result. For example, the `atomic_dec_and_test()` function decrements by one the
given atomic value. If the result is zero, it returns true; otherwise, it returns false.

The atomic operations are typically implemented as inline functions with inline assembly.

### Atomic Bitwise Operations

Family of functions that operate at the bit level. They are architecture-specific and defined in `<asm/bitops.h>`.

```c
unsigned long word = 0;

set_bit(0, &word);              /* bit zero is now set (atomically) */
set_bit(1, &word);              /* bit one is now set (atomically) */
printk("%ul\n", word);          /* will print "3" */
clear_bit(1, &word);            /* bit one is now unset */
change_bit(0, &word);           /* bit zero is flipped; now it is unset (atomically) */
```

Other important functions are:

* `test_and_set_bit()`
* `test_and_clear_bit()`
* `test_and_change_bit()`

If you don't require atomicity (say, for example, because of a lock already protects
your data), the nonatomic versions of all bitwise functions might be faster. For
example, the nonatomic form of `set_bit()` is `__set_bit()`.

Although it would be nice if every critical region consisted of code that did nothing
more complicated than incrementing a variable, reality is harder.

## Spin Locks

In real life, critical regions can span multiple functions.

The most common lock in the Linux kernel is the spin lock. A spin lock is a lock that
can be held by at most one thread of execution.

```c
spin_lock(&mr_lock);
/* critical region */
spin_unlock(&mr_lock);
```

## Semaphores

## Mutexes

## Preemption Disabling
