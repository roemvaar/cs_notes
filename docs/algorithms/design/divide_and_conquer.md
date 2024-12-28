---
layout: default
title: Divide and Conquer
parent: Design
nav_order: 1
---

# Divide-and-conquer

All the following information comes from [CLRS] 4th edition. 

Many useful algorithms are **recursive** in structure: to solve a given problem, they **recurse** (call themselves) one or more times to handle closely related subproblems. These algorithms typically follow the **divide-and-conquer** method: they break the problem into several subproblems similar to the original problem but smaller in size. They solve the subproblems recursively and then combine these solutions to create a solution to the original problem.

In the divide-and-conquer method, if the problem is small enough - the **base case** - you solve it directly without recursing. Otherwise - the **recursive case** - you perform three characteristic steps:

* **Divide** the problem into one or more subproblems that are smaller instances of the same problem.

* **Conquer** the subproblems by solving them recursively.

* **Combine** the subproblem solutions to form a solution to the original problem.

The **merge sort** algorithm closely follows the divide-and-conquer method.
