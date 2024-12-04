---
layout: default
title: Memory
parent: Linux Kernel
nav_order: 1
---

# Memory Management

Linux memory management is a complex subsystem that deals with:

* Management of the physical memory: allocating and freeing memory
* Management of the virtual memory: paging, swapping, demand paging, copy on write
* User services: user address space management (e.g., mmap(), brk(), shared memory)
* Kernel services: SL*B allocators, vmalloc
