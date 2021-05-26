# Memory in C

## Stack

Stack frame allocation (correspondant to each call of a certain function) - each time the
function execution finishes all the local variables are gone from the memory.

## Heap

When you request some memory to store something on the heap using new or malloc,
you don't get a variable name and the only way to access it is through a pointer
variable.

## Data Segment

The static variables are stored in the data segment of the memory. Different from the stack
frame allocation for a certain function call, i.e., its value persists even after the function
where it appears has returned.
