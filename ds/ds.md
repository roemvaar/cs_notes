# Data Structures

*TODO: Complete contents of this file*

- Abstract Data Type (ADT): describes how variables of a given type are operated. It provides a list 
of operations but doesn't explain hwo data operations happen. 

- Data Structures: describe how data is to be organized and accesed in the computer's memory. 
They provide a way for implementing ADTs in data-handling modules.

*With **ADTs**, you as a coder learn to interact with the data, like a driver uses a car's dashboard. In order
to understand how the wires are structured behind the dashboard you need to learn **Data Structures**.*


## Abstract Data Type (ADT)

* **Primitive data types**

Primitive data types are those with built-in support in the programming language you're
using. These always include integers, floating-points, and generic operations with them
(addition, subtraction, division). Many languages also come with built-in support for
storing text, booleans and other simple data types in their variables.

* **Stack**

Used when we have a pile of items, and only work with its top item. The item on top is
always the pile's most recently inserted one, i.e. LIFO (Last-In, First-Out).

Operations:
  
  - push(e): add an item e to the top of the stack
  - pop(): retrieve and remove the item on top of the stack

More "advanced" stacks may provide more operations: to check whether the stack is empty,
or to get the number of items currently in the stack.
 
*Use case:* For implementing the "undo" feature in a text editor, every edition you make
is pushed onto a stack. Should you want to undo, the text editor pops and edition from the
stack and reverts it.


* **Queue**


Used for storing and retrieving items. The retrieved item is always the one in front of the
queue, i.e. FIFO (First-In, First-Out).Queue is the stack's antagonists.

Operations:

  - enqueue(e): add an item e to the back of the queue
  - dequeue(): remove the item at the front of the queue

*Use case:* When data is transferred asynchronously (data not necessarily received at same
rate as sent) between two process, e.g. I/O buffers.


* **Priority Queue**

Similar to queue, with the difference that enqueued items must have an assigned priority.

Operations:

  - enqueue(e, p): add an item e to the queue according to the priority level p
  - dequeue(): remove the item at the front of the queue and return it

*Use case:* In a computer there are typically many running processes but only one (or a
few) CPUs to execute them. An operating system organizes all these processes waiting for
execution in priority queue. Some processes are more time-sensitive and get immediate CPU
time, others wait in the queue longer.

* **List**

A list or sequence is an ADT that represents a countable number of values, where the same
value may occur more than once.

Operations:

  - insert(n, e): insert the item e at position n
  - remove(n): remove the item at position n
  - get(n): get the item at position n
  - sort(): sort the items in the list
  - slice(start, end): return a sub-list slice starting at the position start up until
    the position end
  - reverse(): reverse the order of the list

*Use case:* lists can be used to store a list of elements. Lists are a basic example of
containers, as they contain other values. If the same value occurs multiple times, each
occurrence is considered a distinct item.

* **Sorted List**

Is useful when you need to maintain an always sorted list of items.

Operations: 

  - insert(e): insert item e at the right position in the list
  - remove(n): remove the item at the position n in the list
  - get(n): get the item at position n

*Use case:* If you need to store links to the most frequently accessed files in a system,
a list is ideal: you can sort the links for display purposes, and remove links at will as
the corresponding files become less frequently accessed.

* **Map**

Map (aka Dictionary) is used to store mappings between two objects: a key object and a
value object. You can query a map with a key and get its associated value.

  - set(key, value): add a key-value mapping
  - delete(key): remove key and its associated value
  - get(key): retrieve the value that was associated to key

*Use case:* you might use a map to store a user's ID number as key, and its full name as
value. Then, given the ID number of a user, the map returns the related name.

* **Set**

Set represents unordered groups of unique items.

Operations:

  - add(e): add an item to the set or produce an error if the item is already in the set
  - list(): list the items in the set
  - delete(e): remove an item fro the set

*Use case:* They're used when the order of the items you need to store is meaningless,
or if you must ensure no items in the group occurs more than once.


## Data Structures

* **Array**

Array are a simple data structure for storing data elements of the same data type. Arrays are
used as the basis for most other data structures. The elements are stored in neighboring (contiguous)
memory locations. Arrays can hold up to N items.

Terms:

    - Element: each item stored in an array is called an element
    - Index: each location of an element in an array has a numerical index, which is used to
    identify the element
    - Capacity: the number of elements that the array could hold, if it was full
    - Length: the number of elements that the array currently has
            
Operations:

    - Traverse: print all the array elements one by one
    - Insertion: add an element at the given index
    - Deletion: delete an element at the given index
    - Search: search an element using the given index or by the value
    - Update: update and element at a given index

```c
    // Declare an array of 10 int elements in C
    int array[10];
```

In C, if an array is not defined, i.e. if you don't put anything inside, the array elements could
contain completely random data. The array capacity must be decided when the array is created. The
capacity cannot be changed later.

* **Linked Lists**

Doubly Linked List

*Array vs Linked Lists:*

* **Tree**

* **Binary Search Tree**

* **Binary Heap**

* **Graph**

* **Hash Table**


### References

- Computer Science Distilled
- Leetcode
