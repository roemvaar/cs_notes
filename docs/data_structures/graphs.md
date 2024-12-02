---
layout: default
title: Graphs
parent: Data Structures
nav_order: 1
---

# Graphs

Graphs are, like, really really important. More than you think. Even if you already think they're important, it's probably more than you think.

There are three basic ways to represent a graph in memory (objects and pointers, matrix, and adjacency list), and you should familiarize yourself
with each representation and its pros and cons.

You should know the basic graph traversal algorithms: breadth-first search and depth-first search. You should know their computational complexity,
their tradeoffs, and how to implement them in real code.

You should try to study up on fancier algorithms, such as Dijkstra and A*, if you get a chance. They're really great for just about anything, from
game programming to distributed computing to you name it. You should know them.

Whenever someone gives you a problem, think graphs. They are the most fundamental and flexible way of representing any kind of a relationship, so
it's about a 50-50 shot that any interesting design problem has a graph involved in it. Make absolutely sure you can't think of a way to solve it 
using graphs before moving on to other solution types. This tip is important!

Graphs are the flexible data structure that use nodes and edges to store information.

### Find a node in a Graph

If the Graph's structure offers no navigation help, you must visit every node in the graph
until you find the one you want. There are two approaches to achieve this:

    - **Depth First Search (DFS):** searching a graph via DFS, we keep following edges,
    going deeper and deeper into the graph. When you reach a node that has no edges to any
    new nodes, we go back to the previous node and continue the process.

    - **Breadth First Search (BFS)**
