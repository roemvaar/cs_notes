---
layout: default
title: Backtracking
parent: Algorithms
nav_order: 1
---

# Backtracking

You have a decision space you can choice from. Your decisions are restricted somehow
and your goal is to do something (solve something, like solve a sudoku board or fill n slots).

Understand subproblem. Craft your decision space. Adhere to your constraints. Converge to a
base case.

You need to remember that if a decision doesn't work out, once you come back from your decision
you get rid of it.

## Three Keys for Backtracking

### 1. Choice

You make choices.

You need to think about your core choice fundamentally. The core choice you are making at
each step. This is how you decide on each step.

To solve a "cell," you must minimize the problem and find subproblems.

### 2. Constraints

You have constraints on the choices.

### 3. Goal

In the end, you are going to converge toward a goal. Our goal is to reach the base cases.

### Tips

If it says "Generate all" or "Compute all" (exhausting decision spaces) it might be a problem
that can be solved with backtracking.
