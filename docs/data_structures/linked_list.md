---
layout: default
title: Linked List
parent: Data Structures
nav_order: 1
---

# Linked List

A linked list is a data structure that represents a sequence of nodes.

Linked lists can implement other data structures, such as a dynamic array.

There are two linked lists: a singly-linked list and a doubly-linked list.

The singly-linked list contains nodes that only point to the next node. The
doubly-linked list has nodes that can point towards both the next and the previous
node.

A node has two parts: the data part and the next part (and the previous part in case
of a doubly-linked list). The data part contains the stored data, and the next (and
previous) part provides the address of the next node.

The first node of a linked list is called the head, and the last node is called the
tail. The the list starts traversing from the head, while the tail ends the list
pointing at NULL. 

In C, the simplest singly linked list element:

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

* Traversal: to traverse all the nodes one after another. Always test
for the end of a linked list, i.e. tail or NULL pointer, as you
traverse it
* Insertion: to add a node at the given position
* Deletion: to delete a node at a given position
* Searching: to search an element by value
* Updating: to update a node

The linked list is a simple data structure, which is the basis for a surprising number of
problem solutions regarding the handling of dynamic data.

### Must study problems:

* Reverse a linked list
* Check if a linked list is acyclic - slow and fast pointers
* Linked List Flattening/Unflattening (multi-level, PIE)
* Implement the Linked List Push and Pop functions.

**Hint:** Take care of the pointer-to-pointer structure. Nodes are to be created in
memory with dynamic memory allocation.
