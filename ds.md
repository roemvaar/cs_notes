# Data Structures

A data structure is a data organization, management, and storage format that enables efficient access
and modification. In other words, a data structure is a collection of data values, the relationship
among them, and the functions or operations that can be applied to the data.

- Abstract Data Type (ADT): describes how variables of a given type are operated. It provides a list 
of operations but doesn't explain how data operations happen. 

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

A list with the restriction that insertion and deletion can be performed only from one end,
called the top.

Used when we have a pile of items, and only work with its top item. The item on top is
always the pile's most recently inserted one, i.e. LIFO (Last-In, First-Out).

Operations:
  
  - push(e): add an item e to the top of the stack
  - pop(): retrieve and remove the item on top of the stack

More "advanced" stacks may provide more operations: to check whether the stack is empty,
to get the top element but don't remove it from the stack (top ()), or to get the number 
of items currently in the stack. Operations are performed in constant time O(1).
 
*Use case:* For implementing the "undo" feature in a text editor, every edition you make
is pushed onto a stack. Should you want to undo, the text editor pops and edition from the
stack and reverts it.

More on [stacks](./stacks/stacks.md)

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

Operations:

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
capacity cannot be changed later

* **Strings**

Strings are used for storing text. A string variable contains a collection of characters surrounded by
double quotes.

Immutability

Operations:

* **Linked List**

There are two types of linked lists: a singly-linked list and a doubly-linked list.

The singly-linked list contains node that only point to the next node. The doubly-linked list
has nodes that can point towards both the next and the previous node.

A node has two parts: the data part and the next part (and the previous part in case of a doubly-
linked list). The data part contains the stored data, and the next (and previous) part provides
the address of the next node.

The first node of a linked list is called the head, and the last node is called the tail. The
list starts traversing from the head, while the tails ends the list pointing at NULL. 

In C, simplest singly linked list element:

```c
    // The simplest linked list element
    typedef struct Element
    {
        struct Element *next;
        int data;
    } Element;
```

In C++, you could define a class for the list element:

```cpp
    // A singly linked list in C++
    class IntElement {
        public:
            IntElement(int value): next(NULL), data(value) {}
            ~IntElement() {}

            IntElement *getNext() const {return next;}
            int value() const {return data;}
            void setNext(IntElement *elem) {next = elem;}
            void setValue(int value) {data = value;}

        private:
            IntElement *next;
            int data;
    };
```

In C++, It usually makes more sense to define a
[template](https://www.geeksforgeeks.org/templates-cpp/) for the list element.

Operations:

  - Traversal: to traverse all the nodes one after another. Always test
    for the end of a linked list, i.e. tail or NULL pointer, as you
    traverse it
  - Insertion: to add a node at the given position
  - Deletion: to delete a node at a given position
  - Searching: to search an element by value
  - Updating: to update a node

The linked list is a simple data structure, which is the basis for a surprising number of
problem solutions regarding the handling of dynamic data.

* **Tree**

(especially Binary Trees and Binary Search Trees) - basic tree construction (from a given array), traversal and manipulation algorithms. You should be familiar with binary trees, n-ary trees, and trie-trees at the very very least. Be familiar with at least one flavor of balanced binary tree, whether it's a red/black tree, a splay tree or an AVL tree. You should actually know how it's implemented. You should know about tree traversal algorithms: BFS and DFS, and know the difference between inorder, postorder and preorder.

In order to solve tree related problems, it's important to deeply understand queues and recursion

The height of a tree equals the height of its tallest subtree plus one.

Types:
  
  - Binary Trees
  - Binary Search Trees
  - Heaps

Operations:
  
  - Common Searches - Breadth-First Search, Depth-First Search
  - Traversals (just like a search, except that instead of stopping when you find a particular target node, you visit every node in the tree) - Preorder, Inorder, Postorder

**Breadth-First Search (BFS):** In BFS you start with the root, move left to right accross the second level, then move left to right accross the third level, and
so forth. You continue the search until either you have examined all the nodes or you find the node you are searching for.

**Depth-First Search (DFS):** A DFS follows one branch of the tree down as many levels as possible until the target node is found or the end is reached. When the search can't
go down any farther, it is continued at the nearest ancestor with unexplored children.

**Traversal - Preorder:** Performs the operation first on the node itself, then on its left descendants, and finally on its right descendants. In other words,
a node is always operated on before any of its descendants.

**Traversal - Inorder:** Performs the operation first on the node's left descendants, then on the node itself, and finally on its right descendants. In other words,
the left subtree is operated on first, then the node itself, and then the node's right subtree.

**Traversal - Postorder:** Performs the operation first on the node's left descendants, then on the node's right descendants, and finally on the node itself. In other
words, a node is always operated on after all its descendants.

Many tree operations can be implemented recursively. The recursive implementation may not be the most efficient, but it's often the best place to start.

* **Binary Search Tree**

Binary Search Tree is a node-based binary tree data structure which has the following properties:

- The left subtree of a node contains only nodes with keys lesser than the node's key
- The right subtree of a node contains only nodes with keys greater than the node's key
- The left and right subtree each must also be a binary search tree

Operations:

* **Binary Heap**

Operations:

* **Graph**

https://github.com/roemvaar/algos-and-ds/blob/master/algos/graphs/graphs.md

Operations:

* **Hash Table**

A hash table is dynamic set that is an effective data structure for implementing
dictionaries. 

Altough searching for an element in a hash table can take as long as O(n), in practice,
hashing performs extremely well. Under reasonable assumptions, the average time to search
for an element in a hash table is O(1).

How can we find things quickly in an unsorted array? with a hash table.

Operations:

  - Insert
  - Search - O(1)
  - Delete

### References

- Computer Science Distilled
- Leetcode
- Programming Interviews Exposed
- Introduction to Algorithms | CLRS
