# Memory in C

## Heap

When you request some memory to store something on the heap using new or malloc,
you don't get a variable name and the only way to access it is through a pointer
variable. Anything stored on the heap will stay on memory, unless explicitly freed using the ```free()``` function.

## Stack

Stack frame allocation (correspondant to each call of a certain function) - each time the
function execution finishes all the local variables are gone from the memory.

Whenever a function is invoked, some amount of memory from the stack is allocated for execution
of that function, and it's called stack frame. When a function call execution finishes, the
stack frame is reclaimed.

## Data Segment

The static variables are stored in the data segment of the memory. Different from the stack
frame allocation for a certain function call, i.e., its value persists even after the function
where it appears has returned.

## Code (Text)

## Why use dynamic memory allocation instead of stack memory

Explained really well using [linked lists](https://www.youtube.com/watch?v=VOQNf1VxU3Q).

Info: https://stackoverflow.com/questions/14588767/where-in-memory-are-my-variables-stored-in-c
