---
layout: default
title: Sorting
parent: Algorithms
nav_order: 1
---

# Sorting

Insertion sort usually runs faster than merge sort for small input sizes, once the input size
n becomes large enough, merge sort advantages insertion sort because of the lg n [1, p.12].

## Selection Sort

```
O(n<sup>2</sup>)O(n<sup>2</sup>)
```

## Insertion Sort

```
O(n<sup>2</sup>)
```

Efficient for (quite) small data sets. It's very efficient at sorting nearly sorted
datasets, even if they're huge.

More efficient in practice than most other simple quadratic algorithms such as selection
sort or bubble sort.

## Merge Sort

```
O(n log(n))
```
Merge sort can be highly useful in situations where quicksort is impractical.

## Quicksort

```
O(n log(n))
```
