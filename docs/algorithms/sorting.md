---
layout: default
title: Sorting
parent: Algorithms
nav_order: 1
---

# Sorting

Insertion sort usually runs faster than merge sort for small input sizes; once the input size n becomes large enough, merge sort's advantage of `log n` versus `n` compensates the difference in constant factors [CLRS, p. 12].

You need to know how to sort. You should know the details of at least one `n log (n)` sorting algorithm. You must know merge sort and quick sort. Don't use bubble-sort.

## Selection Sort

O(n<sup>2</sup>).

## Insertion Sort

O(n<sup>2</sup>).

Efficient for (quite) small data sets. It's very efficient at sorting nearly sorted
datasets, even if they're huge.

It is more efficient in practice than most other simple quadratic algorithms, such as selection
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
