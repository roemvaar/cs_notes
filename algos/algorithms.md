# Algorithms

Here is a list of the mos important algorithms every good coder should be familiar with.

## Sorting

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
    O(nlogn)
```

### Quicksort

```
    O(nlogn)
````

## Searching

Looking for specific information in memory is a key operation in computing.

## Linear Search

```
    O(n)
```

Look at the items one after the other, until you find the one you want, or check all
items to realize it's not there.

## Binary Search

```
    O(logn)
```

The items must be in a sorted array. Each step of binary_search does a constant number
of operations and discards half the input.

## Search using a Hash Table

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

