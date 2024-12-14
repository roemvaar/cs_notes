---
layout: default
title: Process Management
parent: Linux Kernel
nav_order: 1
---

# Process Management

## How does the Linux kernel handle process management?

Linux implements the standard Unix process management APIs such as fork(), exec(), wait(), as well as standard POSIX threads.

Process is the core operating system abstraction. Process is a fundamental and
crucial abstraction, at the heart of every modern operating system, and ultimately
the reason we have opearting systems altogether, to run programs.

Linux stores and represents processes with `task_struct` and `thread_info`. In
Linux, processes are created via `fork()` and ultimately `clone()`.

New executable images are loaded into address space via the `exec()` family of
system calls.

There's a hierarchy of processes. Parents glean information about their deceased
children via the `wait()` family of system calls.

Process ultimately die forcefully or intentionally via `exit()`.

## Threads

It is often useful for the kernel to perform some operations in the background.
The kernel accomplish these background operations via kernel threads - the standard
processeses that exist solely in kernel-space.

### Difference between threads and processes?

The signficant difference between kernel threads and normal process is that kernel
threads do not have an address space. Their `mm` pointer, which points at their
address space is NULL.
