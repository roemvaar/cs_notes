---
layout: default
title: Hash Tables
parent: Data Structures
nav_order: 1
---

# Hash Tables

A **Hash Function** maps data, e.g. strings, to numbers. But there are some requirements for a hash function:

* It needs to be consistent
* It should map words to different numbers

A tree is a connected graph without cycles, i.e., a type of graph, but not all graphs are trees.

### Big O

Average case:

* Search: O(1)
* Insert: O(1)
* Delete: O(1)

In the average case, hash tables are as fast as arrays at searching (getting a value
at an index). And they're as fast as linked lists at inserts and deletes. In the worst
case, it could be faster at all of those.

### Use Cases

* DNS resolution: mapping a web address to an IP address.

### Hashes are good for:

* Modelling relationships from one thing to another
* Filtering out duplicates
* Caching/memorizing data instead of duplicating work

### Collisions

Two keys have been assigned the same slot.

There are multiple ways to deal with collisions. The simple one is this: if multiple
keys map to the same slot, start a linked list at that slot.

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
