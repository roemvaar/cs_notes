---
layout: default
title: Big O
parent: Computer Systems
nav_order: 1
---

# Time Complexity and Space Complexity

Time (and space) complexity is the measurement of an algorithm speed/runtime (or space usage in case of
space complexity) as the size of input of the algorithm increases. 

### Big-O notation

Big O notation is the notation used to describe the time complexity and space complexity of algorithms.

**Algorithm runtime and space complexity analysis**

Big O is difficult concept at first. However, once it "clicks", it gets fairly easy. The same
patterns come up again and again, and the rest you can derive.

You need to know Big O, it's a MUST in order to understand the running complexity and
memory footprint of the algorithms that you design and implement.

Variables used in Big O notation denote the sizes of inputs to algorithms. The following examples of
common complexities and their Big O notations, ordered from fastest to slowest.

![big_o](./img/big_o.png)

### Constant - O(1)

### Logarithmic - O(log(n))

log<sub>2</sub>N = k -> 2<sup>k</sup> = N

When you see a problem where the number of elements in the problem space gets halved each time, that will likely
be a O(log N) runtime.

This is the reason why finding an element in a balanced binary search tree is O(log N). With each comparison, we
go either left or right. Half the nodes are on each side, so we cut the problem space in half each time.

### Linear - O(n)

### Log-Linear - O(nlog(n))

### Quadratic - O(n<sup>2</sup>)

### Polinomial - O(n<sup>c</sup>)

### Exponential - O(c<sup>n</sup>)

Recursive calls: O(branches<sup>depth</sup>)

If there are two branches per recursive call, and we go as deep as N, therefore the runtime is O(2<sup>N</sup>).

Generally speaking, when you see an algorithm with multiple recursive calls, you're looking at exponential runtime.

Memoization is a tecnique used to optimize exponential time recursive algorithms.

### Factorial - O(n!)


## Important concepts

- **Drop the constants**

- **Drop the non-dominant terms**

- **Multi-part algorithms: add vs multiply**

Suppose you have an algorithm that has two steps. When do you multiply the runtimes
and when do you add them?

Add the runtimes: O(A + B)

```
for(int a: arrA) {
  print(a);
}

for(int b: arrB) {
  print(b);
}
```

In this example, we do A chunks of work then B chunks of work. Therefore, the total
amount of work is O(A + B).

Multiply the runtimes: O(A * B)

```
for(int a: arrA) {
  for(int b: arrB) {
    print(a + "," + b);
  }
}
```

In this example, we do B chunks of work for each element in A. Therefore, the total
amount of work is O(A * B).

- **In the context of coding interviews, Big O notation is usually understood to describe**
**the worst-case complexity of an algorithm**

**Sources:**

- [Big Oh Cheat Sheet](https://www.bigocheatsheet.com/)
- [mycodeschool](https://www.youtube.com/watch?v=V42FBiohc6c&list=PL2_aWCzGMAwI9HK8YPVBjElbLbI3ufctn)
- CTCI - chapter Vl
