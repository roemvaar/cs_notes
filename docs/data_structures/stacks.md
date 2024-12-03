---
layout: default
title: Stacks
parent: Data Structures
nav_order: 1
---

# Stacks

### Discuss the stack data structure. 

![stack](../img/stack.jpg)

A stack is a data structure that uses the FILO mechanism (First In, Last Out), i.e., you only have access to the last element (top element) inserted into the stack.

### Operations:
  
* push(elem): add an item elem to the top of the stack
* pop(): retrieve and remove the item on top of the stack

More "advanced" stacks may provide more operations: to check whether the stack is
empty, to get the top element but don't remove it from the stack (top ()), or to get
the number of items currently in the stack.

### Use cases:

Useful for tasks that are divided into multiple subtasks:

* To implement the "undo" feature in a text editor, every edition you make is pushed
onto a stack. Should you want to undo it, the text editor pops an edition from the
stack and reverts it.

* Stack region of memory: Used for tracking the return addresses, parameters, and
local variables for subroutines.

* Tracking tokens when parsing a programming language.

### Stack Implementation - Dynamic Arrays vs Linked Lists:

* Dynamic arrays have random access to memory - which is not a huge advantage in
stacks because you only care about the top element.

* Dynamic arrays may be resized if the stack grows, meaning the elements from the old
array must be copied to the new array. This resizing is a time-consuming operation.

* Linked lists allocate memory dynamically for each new element. Depending on the
overhead of the memory allocator, these allocations are often more time-consuming than
the copies required by a dynamic array.

* Adjacent elements in a dynamic array are adjacent elements in memory, and this may
not be the case for linked lists. Also, a pointer is needed for each element of a
linked list.

* The prior point shows that dynamic arrays have better memory locality, which has big
performance implications as processors are faster than arrays. Usually, an array-based
stack is faster than a linked list.

* Conversely, a linked list is easier to implement than a dynamic array.
