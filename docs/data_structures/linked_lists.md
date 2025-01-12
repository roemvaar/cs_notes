---
layout: default
title: Linked Lists
parent: Data Structures
nav_order: 1
---

# Linked Lists

<!-- Focus: Reversals, detecting cycles, and merging sorted lists. -->

A linked list is a simple data structure, which is the basis for a surprising number of problem solutions regarding the handling of dynamic data. A linked list is a data structure that represents a sequence of nodes.

Linked lists can implement other data structures, such as a dynamic array.

There are two linked lists: a singly-linked list and a doubly-linked list.

The singly-linked list contains nodes that only point to the next node. The doubly-linked list has nodes that can point towards both the next and the previous node.

A node has two parts: the data part and the next part (and the previous part in case of a doubly-linked list). The data part contains the stored data, and the next (and previous) part provides the address of the next node.

The first node of a linked list is called the head, and the last node is called the tail. The the list starts traversing from the head, while the tail ends the list pointing at NULL. 

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

In C++, It usually makes more sense to define a [template](https://www.geeksforgeeks.org/templates-cpp/) for the list element.

**Hint:** Take care of the pointer-to-pointer structure. Nodes are to be created in memory with dynamic memory allocation.

## **2. Operations and Complexities**

| Operation      | Time Complexity | Notes                                      |
|----------------|-----------------|--------------------------------------------|
| Search         | O(...)          |                                            |
| Insert         | O(...)          |                                            |
| Delete         | O(...)          |                                            |
| Search         | O(...)          |                                            |
| Insert         | O(...)          |                                            |
| Traversal      | O(...)          |                                            |

To traverse all the nodes one after another. Always test for the end of a linked list, i.e., NULL pointer, as you traverse it.

---

## **4. Important Techniques**

* **Sentinels:** a sentinel is a special "dummy" node used to make operations on a linked list easier by removing the need to check for NULL at the start or end of the list.
* **The "Runner" Technique:** the runner (or second pointer) technique means that you have to iterate through the linked list with two pointers simultaneously, with one ahead of the other.

---

## **5. Must-Know Problems**

* **[Reverse Linked List](https://leetcode.com/problems/reverse-linked-list/description/)**
<!-- * Check if a linked list is acyclic -->
