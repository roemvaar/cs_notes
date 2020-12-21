# Data Structures

*TODO: Complete contents of this file*

 Abstract Data Type (ADT): describes how variables of a given type are operated. It provides a list 
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


* Priority Queue

Similar to queue, with the difference that enqueued items must have an assigned priority

Operations:

- enqueue(e, p): add an item e to the eque according to the priority level p
- dequeue(): remove the item at the front of the queue and return it

LIST

Operations:

- insert(n, e): insert the item e at position n
- remove(n): remove the item at position n
- get(n): get the item at position n
- sort(): sort the items in the list
- slice(start, end): return a sub-list slice starting at the position start up until the position end
- reverse(): reverse the order of the list

SORTED LIST:

Is useful when you need to mantain an always sorted list of items.

Operations: 

- insert(e): insert item e at the right position in the list
- remove(n): remove the item at the position n in the list
- get(n): get the item at position n

MAP

Map (aka Dictionary) is used to store mappings between two objects: a key object and a value object. 
You can query a map with a key and get its associated value.

- set(key, value): add a key-value mapping
- delete(key): remove key and its associated value
- get(key): retrieve the value that was associated to key

SET

Set represents unorderdered groups of unique items.

They're used when the order of the items you need to store is meaningless, or if you must ensure
no items in the group occurs more than once.

Operations:

- add(e): add an item to the set or produce an error if the item is already in the set
- list(): list the items in the set
- delete(e): remove an item fro the set

 
