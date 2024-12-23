---
layout: default
title: Depth-First Search (DFS)
parent: Algorithms
nav_order: 1
---

# Depth-First Search (DFS)

Depth-First Search (DFS) is a tree and graph traversal algorithm. DFS visit the nodes in the three or graphs.

A DFS follows one branch of the tree down as many levels as possible until the target node is found or the end is reached.

When the search can't go down any further, it is continued at the the nearest ancestor with unexplored children.

![bfs_dfs](../../assets/img/bfs_dfs.png)

In DFS, we start at the root (or another arbitrarily selected node) and explore each branch completely before moving on to the next branch. That is, we go deep first (hence the name depth-first search) before we go wide.

## Implementation

In DFS, we visit a node a and then iterate through each of a's neighbours. When visiting a node b that is a neighbour of a, we visit all of b's neighbours before going on to a's other neighbours. That is exhaustively searches b's branch before any of its other neighbours.

The pseudocode below implement DFS:

```c++
void dfs(Node root)
{
    if (root == nullptr) return;
    print(root);
    root.visited = true;

    for_each (Node n in root.adjacent) {
        if (n.visited == false) {
            dfs(n);
        }
    }
}
```

Note that pre-order and other forms of tree traversal are a form of DFS. The key difference is that when implementing this algorithm for a graph, we must check if the node has been visited. If we don't we risk getting stuck in an infinite loop.
