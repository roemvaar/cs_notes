#ifndef TREES_H
#define TREES_H

#include "bfs.h"
#include "dfs.h"

typedef struct node {
    int value;
    struct node *left;
    struct node *right;
} node_t;

/* Traversal technique - Preorder traversal. Inorder traversal. Postorder traversal. */
typedef enum technique {
    PREORDER,
    INORDER,
    POSTORDER,
} technique_t;

#endif /* TREES_H */
