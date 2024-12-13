---
layout: default
title: Concurrency
parent: Linux Kernel
nav_order: 1
---

# Concurrency

One way kernel programming differs greatly from conventional application programming is the concurrency issue. Most applications, with notable exceptions of multithreading applications, typically run sequentially, from the beginning to the end, without worrying about what else might be happening to change their environment.

Kernel code does not run in such a simple world (sequentially from beginning to end), and even the simplest kernel modules must be written with the idea that many things can happen simultaneously.

There are many sources of concurrency in kernel programming:

* Linux systems run multiple processes.
* Most devices are capable of interrupting the processor, interrupt handlers run asynchronously and can be invoked at any time.
* Several software abstractions (such as kernel timers) run asynchronously.
* Linux can run on symmetric multiprocessor (SMP) systems.
* Kernel code is preemptible.

As a consequence:

* Linux kernel code must be **reentrant** - it must be capable of running in more than one context at the same time.
* Data structures must be carefully designed to keep multiple threads of execution separated.
* The code must take care to **access shared data in ways that prevent corruption of data**.

Writing code that handles concurrency and avoids **race conditions** (situations in which an unfortunate order of execution causes undesirable behavior) requires thought and can be tricky. **Proper management of concurrency is required to write correct kernel code.** If you do not write your code with concurrency in mind, it will be subject to catastrophic failures that can be exceedingly difficult to debug.

## Spinlocks

Symmetric Multiprocessing (SMP) is difficult to implement because it creates race conditions in the kernel if two processes run kernel functions that access the same memory locations.

In SMP, the kernel must implement synchronization primitives (e.g., spinlocks) to guarantee that only one processor executes a critical section.

<!-- Explain different locking mechanism and the various pros and cons of each
Describe the difference between a Mutex and a Spinlock and why would you use one instead of the other?
https://elixir.bootlin.com/linux/v6.11.1/source/kernel/reboot.c#L751 GOOD EXAMPLE OF A MUTEX USE
Why not use spinlocks for everything? -->

[Example](https://elixir.bootlin.com/linux/v6.11/source/kernel/sched/sched.h#L1011) of a lock being used on the kernel.
