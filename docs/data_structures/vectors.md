---
layout: default
title: Vectors
parent: Data Structures
nav_order: 1
---

# Vectors

Special types of arrays. Dynamic arrays help us improve static arrays' performance by
implementing certain operations differently. Python: lists. C++: vectors.

Operations:

* Same as a fixed-size array, plus:
* insert_at(idx, value) - make x the new x_i, shifting all numbers to the "right"
* delete_at(idx) - delete element at i, and shift all elements bigger than x_i+1 to
the "left"
* insert/delete at first/last (value)/()
