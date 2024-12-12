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

You need to fundamentally think about your core choice. The core choice you are making at
each step. This is how you take the decision at each step.

In order to solve a "cell", you need to minimize the problem and find subproblems.

### 2. Constraints

You have constraints on the choices.

### 3. Goal

At the end you are going to converge towards to a goal. Our goal is to reach to the base
cases.

### Tips

If it says "Generate all" or "Compute all" (exhausting decision spaces) it might be a problem
that can be solved with backtracking.
