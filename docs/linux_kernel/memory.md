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

## Pages

The kernel treats physical pages as the basic unit of memory management.

Although the processor's smallest addresable unit is a byte or a word, the memory management unit (MMU, the hardware that manages memory and performs virtual to physical address translations) typically deals with pages.

Therefore, the MMU maintains the system's page tables with page-size granularity. In terms of virtual memory, pages are the smallest unit that matters.

Each architecture defines its page size. Typically:

* Most 32-bit architectures have 4KB pages
* Most 64-bit architectures have 8KB pages

The kernel represents every physical page on the system with a struct page structure.

## Zones

Some pages, because of their physical address in memory, cannot be used for certain tasks. Because of this limitation, the kernel divides pages into different zones.

The kernel uses the zones to group pages of similar properties.

The use and layout of the memory zones is architecture-dependent.

## Getting Pages

The kernel provides one low-level mechanism for requesting memory, along with several interfaces to access it.

```c
struct page *alloc_pages(gfp_t gfp_mask, unsigned int order);
```

This allocates 2^order (that is, 1 << order) contiguous physical pages and return a pointer to the first page's page structure; on error it returns NULL.

## Slab Layer

Allocating and freeing data structures is one of the most common operations inside any kernel. To facilitate frequent allocations and deallocations of data, programmers often introduce free lists. A free list contains a block of available, already allocated, data structures. When code requires a new instance of a data structure, it can grab one of the structures off the free list rather than allocate the sufficient amount of memory and set it up for the data structure. Later, when the data structure is no longer needed, it is returned to the free list instead of deallocated. In this sense, the free list acts as an object cache, caching a frequently used type of object.

The problem with this is that there's no global control of the free lists. A potential problem is when the system is running low on memory, there's no way for the kernel to modify (shrink the size) the free lists.

To remedy this, the Linux kernel provides the slab layer (also called the slab allocator). The slab layer acts as a generic data structure-caching layer.
