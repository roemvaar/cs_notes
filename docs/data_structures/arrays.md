---
layout: default
title: Arrays
parent: Data Structures
nav_order: 1
---

# **Arrays**

## **1. Overview**

An array is a data structure consisting of a collection of elements (values), of same data type, each identified by at least one array index. Arrays are used as the basis for most other data structures. The elements are stored in neighboring (contiguous) memory locations. Arrays can hold up to N elements.

Arrays are fixed in C and C++. The size of the array is defined when you create the array.

```c
    // Declare an array of 10 int elements in C
    int array[10];
```

In C, if an array is not defined, i.e. if you don't store anything inside, the array elements could contain completely random data. The array capacity must be decided when the array is created. The capacity cannot be changed during runtime.

Static arrays have a static sequence interface, i.e., arrays are great when you need random access memory, as long as you know the beginning of the array, you can access any element inside the array in constant time.

<!-- Members:
  
* element: each item stored in an array is called an element
* index: each location of an element in an array has a numerical index, which is used to
identify the element
* capacity: the number of elements that the array could hold if it were full
* length: the number of elements that the array currently has -->

- **Use Cases:** 
  - Example: Efficient searching and sorting (e.g., database indexing).
  - Example: Suitable for priority-based tasks (e.g., heaps for priority queues).

---

## **2. Operations and Complexities**

| Operation      | Time Complexity | Notes                                        |
|----------------|-----------------|----------------------------------------------|
| Search         | O(n)          | Linear search to find the key in the array    |
| Insert         | O(...)          | Special cases (e.g., balanced or unbalanced) |
| Delete         | O(...)          |                                              |
| Slicing        | O(...)          |                                              |

<!-- Operations:

* build(size) - create a fixed-size array
* build(size, value) - create fixed-size array, initialize all positions with value
* len() - returns n
* traverse(): - output all elements of the array from pos 0 to size - 1
* get_at(idx): - return xi (index i)
* set_at(idx, value): add an element at the given index
* get_first/last()
* set_first/last(value) 
* slicing (?)
-->

---

## **3. Strengths and Weaknesses**

| **Strengths**                | **Weaknesses**                |
|------------------------------|------------------------------|
| Direct access to any element   | Example: Memory overhead     |
| Example: Supports ordered data| Example: Inefficient for...  |

---

## **4. Important Techniques**

* **Sliding Window:** Brief explanation (e.g., balancing for AVL Trees).  
* **Two Pointers:** Description (e.g., traversal methods like Inorder, Preorder).

---

## **5. Must-Know Problems**

- **[Rotate Image](https://leetcode.com/problems/rotate-image/solution/)**

<!-- * Best Time to Buy and Sell Stock II
* Count and Say
* Design a stack (linked list vs arrays/vectors) -->

---

## **6. Common Mistakes**

- Forgetting edge cases like empty/null structures.
- Misunderstanding amortized complexities (e.g., hash table operations).

---

## **7. Cheat Sheet / Key Formulas**

- Key patterns or pseudocode templates.  
- Example: Recursion template for binary tree traversal:

  ```python
  def traverse(node):
      if not node:
          return
      traverse(node.left)
      process(node)
      traverse(node.right)
  ```

## **8. References**

- [GeeksForGeeks: Data Structure]()
- [LeetCode: Data Structure Problems]()
- Any additional links or resources.
