# Hash Tables

A **Hash Function** maps data, e.g. strings, to numbers. But there are some requirements for a hash function:

- It needs to be consistent
- It should map words to different numbers

## Big O

Average case:

- Search: O(1)
- Insert: O(1)
- Delete: O(1)

In the average case, hash tables are as fast as arrays at searching (getting a value at an index). And they're as fast as linked
lists at inserts and deletes. In the worst case, are slow at all of those.

## Use Cases

- DNS resolution: mapping a web address to an IP address.

## Hashes are good for:

- Modelling relationships from one thing to another
- Filtering out duplicates
- Caching/memorizing data instead of duplicating work

## Collisions

Two keys have been assigned the same slot.

There are multiply ways to deal with collisions. The simples one is this: if multiple keys maps to the same
slot, start a linked list at that slot.
