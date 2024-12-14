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
