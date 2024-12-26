---
layout: default
title: Memory
parent: Embedded
nav_order: 1
---

# Memory

In this page we discuss memory, memory hierarchy, caching, and virtual memory in modern embedded systems.

## Cache

Cache is the fastest and most expensive memory that you can have in your computer system. The cache memory is inside the processor.

Cache is a very limited amount of memory that you have in your system, hence you need to have a main memory.

![memory](../../../assets/img/memory.png)

Cache is a small and fast memory to keep the working set of a program close to the computation.

Processors might have multiple levels of caches before you need to go find your data at main memory.

### Cache Concepts

* **Cache Hit**

* **Cache Miss**

* **Cold Miss**

* **Capacity Miss**

* **Conflict Miss**

A conflict miss occurs when you try to load two consecutive memory areas into the same cache line.

* **Hit Rate**

* **Miss Rate**

* **Write Through**

* **Write Back**

## Memory Hierarchy

The memory hierarchy says that the fastest the memory is the lowest its capacity and the more expensive it is. The cheaper memory is thus slower and we can get bigger capacity.

Accessing memory in main memory is slower than accessing data in cache.

<!-- TODO: Add a digram of memory diagram -->

## Virtual Memory and Memory Address Translation

Virtual memory is enabled by memory address translation.

Memory address translation provides a layer of indirection to enable additional functionality where the address that a program is trying to access is not the same as the physical address in memory where this data is located.

When a program tries to access an address a particular address, that doesn't mean that it will find it at that specific address, instead, thanks to virtual memory, there's a layer of indirection between these two addresses.

Virtual memory enables:

* **Paging**

In a system with paging, what the process see is a virtual address.

![paging](../../../assets/img/paging.png)

In computer operating systems, memory paging (or **swapping** on some Unix-like systems) is a memory management scheme by which a computer stores and retrieves data from secondary storage for use in main memory.

In paging, the operating system retrieves data from secondary storage in same-size blocks called **pages**.

Paging is an important part of virtual memory implementations in modern operating systems, using secondary storage to let programs exceed the size of available physical memory.

Since access to the page table takes time, operating systems offer a Translation Lookaside Buffer (TLB). The TLB is a cache for table lookups.

![tlb](../../../assets/img/tlb.png)

* **Segmentation**

* **Relocation**

* **Swapping**

* **Authorization**

<!-- 
TODO: Read William Stallings book: Operating Systems: internals and design  principles - Chapter on virtual memory -->
