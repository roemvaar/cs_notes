# Algorithms

Here is a list of the most important algorithms every good coder should be familiar with.


## Sorting

TODO: Must have - Algorithms - Sorting: know how to sort. Don't do bubble-sort. You should
know the details of at least one nlog(n) sorting algorithm, preferably two (say, quicksort
and merge sort).

Sorting: know how to sort. Don't do bubble-sort. You should know the details of at least one n*log(n) sorting algorithm, preferably two (say, quicksort and merge sort). Merge sort can be highly useful in situations where quicksort is impractical, so take a look at it. - https://github.com/roemvaar/algos-and-ds/tree/master/algos/sort

### Selection Sort

```
O(n<sup>2</sup>)O(n<sup>2</sup>)
```

### Insertion Sort

```
O(n<sup>2</sup>)
```

Efficient for (quite) small data sets. It's very efficient at sorting nearly sorted
datasets, even if they're huge.

More efficient in practice than most other simple quadratic algorithms such as selection
sort or bubble sort.

### Merge Sort

```
O(n log(n))
```
Merge sort can be highly useful in situations where quicksort is impractical.

### Quicksort

```
O(n log(n))
````


## Searching

TODO: Must have - Algorithms - Breadth First Search, Depth First Search, Binary Search,
Merge Sort and Quicksort

Looking for specific information in memory is a key operation in computing.

### Linear Search

```
O(n)
```

Look at the items one after the other, until you find the one you want, or check all
items to realize it's not there.

### Binary Search

```
O(log(n))
```

The items must be in a sorted array. Each step of binary_search does a constant number
of operations and discards half the input.

### Search using a Hash Table

```
    O(1)
```

By storing items in a Hash Table, you only need to calculate the hash of the key you are
searching for, i.e. you find the element you're looking for in constant time.


## Graphs

Graphs are the flexible data structure that use nodes and edges to store information.

### Find a node in a Graph

If the Graph's structure offers no navigation help, you must visit every node in the graph
until you find the one you want. There are two approaches to achieve this:

    - **Depth First Search (DFS):** searching a graph via DFS, we keep following edges,
    going deeper and deeper into the graph. When you reach a node that has no edges to any
    new nodes, we go back to the previous node and continue the process.

    - **Breadth First Search (BFS)**


## Bitlogic / Bit Manipulation

[Bit Manipulation](./computer_systems/bit_manipulation.md)


## Greedy Algorithms

Greedy algorithms optimize locally, hoping to end up with a global optimum. Greedy algorithms are easy to write and fast to run, so
thy make good approximation algorithms.

NP-Complete problems have no known fast solution. If you have an NP-Complete problem, your best bet is to use an approximation algorithm.


## Recursion


## Dynamic Programming

Dynamic programming is about to always remember answers to the sub-problems you've already solved. We need to break up a problem
into a series of overlapping sub-problems, and build up solutions to larger and larger sub-problems. If you are given a problem,
which can be broken down into smaller sub-problems, and these smaller sub-problems can still be broken into smaller ones - and if
you manage to find out that there are some over-lapping sub-problems, then you've encountered a DP problem.

Some famous Dynamic Programming algorithms are:
    
    - Unix diff for comparing two files
    - Bellman-Ford for shortest path routing in networks

The core idea of Dynamic Programming is to avoid repeated work by remembering partial results and this concept finds its
application in a lot of real life situations.

The intuition behind dynamic programming is that we trade space for time, i.e. to say that instead of calculating all the
states taking a lot of time but no space, we take up space to store the results of all the sub-problems to save time later.

**Memoization** is a term describing an optimization technique where you cache previously computed results, and return the
cached result when the same computation is needed again.
