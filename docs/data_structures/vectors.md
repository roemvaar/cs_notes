---
layout: default
title: Vectors
parent: Data Structures
nav_order: 1
---

# Vectors

Arrays are fixed in C and C++, when you need an array-like data structure that offers dynamic resizing, you would use a `std::vector` in C++.

A vector is an array that resizes itself as needed while still providing O(1) access.

<!-- Special types of arrays. Dynamic arrays help us improve static arrays' performance by implementing certain operations differently. Python: lists. C++: vectors. -->

A typical implementation of vectors is that when the array is full, the array doubles in size. Each doubling takes O(n) time, but happens so rarely that its amortized insertion time is O(1).

---

## **2. Operations and Complexities**

| Operation      | Time Complexity | Notes                                      |
|----------------|-----------------|--------------------------------------------|
| Search         | O(...)          |                                            |
| Insert         | O(1)            | Amortized time, worst case is O(n)         |
| Delete         | O(...)          |                                            |

<!-- * Same as a fixed-size array, plus:
* insert_at(idx, value) - make x the new x_i, shifting all numbers to the "right"
* delete_at(idx) - delete element at i, and shift all elements bigger than x_i+1 to
the "left"
* insert/delete at first/last (value)/() -->

---

## **6. Common Mistakes**

* Inserting on a vector that is full. Insertions take O(1) time in vectors, but when we insert into a full vector, it needs to double its size to allocate new elements, this operation takes O(n).
* Insertion has an amortized time of O(1), worst case is O(n).

---
