---
layout: default
title: Hash Tables
parent: Data Structures
nav_order: 1
---

# **Hash Tables**

## **1. Overview**

* **Definition:** A hash table is dynamic set that is an effective data structure for implementing dictionaries.

A **Hash Function** maps data, e.g. strings, to numbers. There are some requirements for a hash function:

* It needs to be consistent.
* It should map words to different numbers.

* **Use Cases:** 
  * DNS Resolution: mapping a web address to an IP address.

---

## **2. Operations and Complexities**

| Operation      | Time Complexity | Notes                                      |
|----------------|-----------------|--------------------------------------------|
| Search         | O(1)            | On average, worst case is O(n)             |
| Insert         | O(1)            | On average, worst case is O(n)             |  
| Delete         | O(1)            | On average, worst case is O(n)             |

Altough searching for an element in a hash table can take as long as O(n), in practice, hashing performs extremely well. Under reasonable assumptions, the average time to search for an element in a hash table is O(1).

<!-- In the average case, hash tables are as fast as arrays at searching, and they are as fast as linked lists at inserts and deletes. In the worst case, it could be faster at all of those. -->

---

## **3. Strengths and Weaknesses**

| **Strengths**                | **Weaknesses**                           |
|------------------------------|------------------------------------------|
| Modelling relationships from one thing to another      | Collisions     |
| Filtering out duplicates  |                                             |
| Caching/memorizing data instead of duplicating  work  |                 |

<!-- How can we find things quickly in an unsorted array? with a hash table. -->

<!-- Hash Tables

    Efficient for lookups, insertions, and handling collisions.
    Focus: Hash maps and sets, and understanding how they're implemented (e.g., hash functions). -->

---

## **4. Important Techniques**

* **Technique 1:** Brief explanation (e.g., balancing for AVL Trees).  
* **Technique 2:** Description (e.g., traversal methods like Inorder, Preorder).  
* Add diagrams or pseudocode snippets if necessary.

---

## **5. Must-Know Problems**

* **Problem 1:** Brief description of the problem and why it's important.
* **Problem 2:** Another key problem and how it tests your understanding.  
* Organize problems into categories if needed (e.g., traversal, searching, etc.).

<!-- * Minimum Characters for Words - algoexpert -->

---

## **6. Common Mistakes**

* Collisions: Two keys have been assigned the same slot.
* Misunderstanding amortized complexities (e.g., hash table operations).

<!-- There are multiple ways to deal with collisions. The simple one is this: if multiple keys map to the same slot, start a linked list at that slot. -->

---

## **7. Cheat Sheet / Key Formulas**

* Key patterns or pseudocode templates.  
* Example: Recursion template for binary tree traversal:

  ```python
  def traverse(node):
      if not node:
          return
      traverse(node.left)
      process(node)
      traverse(node.right)
  ```

## **8. References**

* [GeeksForGeeks: Data Structure]()
* [LeetCode: Data Structure Problems]()
* Any additional links or resources.
