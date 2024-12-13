---
layout: default
title: Heaps
parent: Data Structures
nav_order: 1
---

# Heaps

A heap is a tree-based data structure that satisfies the heap property:

"In a max heap, for any given node C, if P is the parent node of C, then the
key (the value) of P is greater than or equal to the key of C. In a min heap,
the key of P is less than or equal to the key of C."

The node at the "top" of the heap (with no parents) is called the root node.

The heap is an efficient implementation of an abstract data type called
priority queue.

## Priority Queues

Priority queues are often referred to as "heaps", regardless of how they may
be implemented.

In C++, the standard library provides a priority queue `std::priority_queue`.
