---
layout: default
title: Backtracking
parent: Algorithms
nav_order: 1
---

# Backtracking

## **1. Overview**

A backtracking algorithm works by recursively exploring all possible solutions to a problem. It starts by choosing an initial solution, and then it explores all possible extensions of that solution. If an extension leads to a solution, the algorithm returns that solution. If an extension does not lead to a solution, the algorithm backtracks to the previous solution and tries a different extension.

You have a decision space you can choice from. Your decisions are restricted somehow and your goal is to do something (solve something, like solve a sudoku board or fill n slots).

Understand subproblem. Craft your decision space. Adhere to your constraints. Converge to a base case.

You need to remember that if a decision doesn't work out, once you come back from your decision you get rid of it.

The following is a general outline of how a backtracking algorithm works:

1. Choose an initial solution.

2. Explore all possible extensions of the current solution.

3. If an extension leads to a solution, return that solution.

4. If an extension does not lead to a solution, backtrack to the previous solution and try a different extension.

5. Repeat steps 2-4 until all possible solutions have been explored.

---

## **2. Key Concepts**

* **Choice**

You make choices.

You need to think about your core choice fundamentally. The core choice you are making at
each step. This is how you decide on each step.

To solve a "cell," you must minimize the problem and find subproblems.

* **Constraints**

You have constraints on the choices.

* **Goal**

In the end, you are going to converge toward a goal. Our goal is to reach the base cases.

---

### Tips

If it says "Generate all" or "Compute all" (exhausting decision spaces) it might be a problem
that can be solved with backtracking.
