---
layout: default
title: Breadth-First Search (BFS)
parent: Algorithms
nav_order: 1
---

# Breadth-First Search (BFS)

In **Breadth-First Search (BFS)**, you start with the root, move left to right across the second level, then move left to right across the third level, and so forth. You continue the search until either you have examined all the nodes or you find the node
you are searching for.

BFS traverses the nodes level by level. In BFS, we start at the root (or another arbitrarily selected node) and explore each neighbor before going on to any of their children. That is, we go wide (hence breadth-first search) before we go deep.

![bfs_dfs](../../assets/img/bfs_dfs.png)

## Implementation

BFS is less intuitive than DFS. The main tripping point is the (false) assumption that BFS is recursive. It's not. Instead, it uses a queue.

In BFS, node `a` visits each of `a's` neighbours before visiting any of their neighbours. You can think of this as searching level by level out from a. An iterative solution involving a queue usually works best.

```c++
void bfs(Node root)
{
    Queue queue = new Queue();
    root.marked = true;
    queue.enqueue(root);    // Add to the end of the queue

    while (!queue.isEmpty()) {
        Node r = queue.dequeue();   // Remove from the front of the queue
        print(r);
        for_each (Node n in r.adjacent) {
            if (n.marked == false) {
                n.marked = true;
                queue.enqueue(n);
            }
        }
    }
}
```

If you are asked to implement BFS, the key thing to remember is using a queue. The rest of the algorithm flows from this fact.
