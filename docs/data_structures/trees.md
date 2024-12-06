---
layout: default
title: Trees
parent: Data Structures
nav_order: 1
---

# Trees

(especially Binary Trees and Binary Search Trees) - basic tree construction (from a given array), traversal and manipulation algorithms. You should be familiar with binary trees, n-ary trees, and trie-trees at the very very least. Be familiar with at least one flavor of balanced binary tree, whether it's a red/black tree, a splay tree or an AVL tree. You should actually know how it's implemented. You should know about tree traversal algorithms: BFS and DFS, and know the difference between inorder, postorder and preorder.

In order to solve tree related problems, it's important to deeply understand queues and recursion.

The height of a tree equals the height of its tallest subtree plus one.

Types:
  
* Binary Trees
* Binary Search Trees
* Heaps

Operations:
  
* Common Searches - Breadth-First Search, Depth-First Search
* Traversals (just like a search, except that instead of stopping when you find a particular target node, you visit every node in the tree) - Preorder, Inorder, Postorder

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

Usage:
  
* Git trees - to keep track of commits, trees and blobs
