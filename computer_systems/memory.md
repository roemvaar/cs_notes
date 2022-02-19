# Memory in C

### Memory Layout of C Programs

  - text (code/instructions)
  - initialized data
  - uninitialized data (bss)
  - heap
  - stack

## Text (Code/Instructions)

## Initialized Data

The static variables are stored in the data segment of the memory. Different from the stack
frame allocation for a certain function call, i.e., its value persists even after the function
where it appears has returned.

## Uninitialized Data (bss)

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


## Why use dynamic memory allocation instead of stack memory

Explained really well using [linked lists](https://www.youtube.com/watch?v=VOQNf1VxU3Q).

Info: https://stackoverflow.com/questions/14588767/where-in-memory-are-my-variables-stored-in-c

## MMU (Memory Management Unit)

MMUs are complex hardware engines. Their purpose is to enable an operating system to exercise a high degree of management and control
over its address space and the address space it allocates to processes, i.e.:

  - Access rights 
  - Memory translation

Their purpose is to enable an operating system to exercise a high degree of management and control over its address space
and the address space it allocates to processes.

In traditional embedded systems, the OS and all the tasks had equal access rights to all resources in the system which lead
to problems where a bug in a process could wipe out memory contents anywhere in the system.

Legacy embedded operating systems view and manage system memory as a single large, flat address space. That is, a
microprocessor's address space exists from 0 to the top of it's physical address range.
  

Advantages of using Linux on embedded systems:

You have both the security of a protected address space that a virtual memory-based system gives you and the power and
flexibility of a multiuser, multiprocessor system.

## Virtual Memory Architecture

## Paging
 
