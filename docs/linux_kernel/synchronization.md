---
layout: default
title: Synchronization
parent: Linux Kernel
nav_order: 1
---

# Synchronization

The Linux kernel provides a family of syncrhonization methods that enable the
developers to write efficient race-free code.

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

### Atomnic Bitwise Operations

Family of functions that operate at the bit level. They are architecture-specific and defined in `<asm/bitops.h>`.

## Spin Locks

## Semaphores

## Mutexes

## Preemption Disabling
