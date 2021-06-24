# Stacks

## Discuss the stack data structure. 

![stack](../img/stack.jpg)

A stack is a data structure that uses the FILO mechanism (First In, Last Out), i.e.,
you only have access to the last element (top element) inserted to the stack.


**Operations:**
  
  - push(elem): add an item elem to the top of the stack
  - pop(): retrieve and remove the item on top of the stack

More "advanced" stacks may provide more operations: to check whether the stack is empty,
to get the top element but don't remove it from the stack (top ()), or to get the number 
of items currently in the stack.


**Use cases:** 

Useful for tasks that are divided in multiple subtasks:

- For implementing the "undo" feature in a text editor, every edition you make is pushed onto a
stack. Should you want to undo, the text editor pops and edition from the stack and reverts it.

- Stack region of memory: Used for tracking the return addresses, parameters, and local variables
for subroutines.

- Tracking tockens when parsing a programming language.


**Stack Implementation - Dynamic Arrays vs Linked Lists:**

- Dynamic arrays have random access to memory - which is not a huge advantage in stacks, because
you ounly care about the top element.

- Dynamic arrays may be resized if the stack grows, which means that the elements from the old
array must be copyied to the new array. This is a time consuming operation.

- Linked lists allocate memory dynamically for each new element. Depending on the overhead of the
memory allocator, these allocations are often more time consuming than the copies required by a
dynamic array.

- Adjacent elements in a dynamic array are adjacent elements in memory, and this may not be the case
for linked lists. Also, a pointer is needed for each element of a linked list.

- The prior point shows that dynamic arrays have better memory locality, which has big performance
implications as processors are faster than arrays. Usually an array based stack is faster than a
linked list one.

- On the other hand, a linked list is easir to implement than a dynamic array.
