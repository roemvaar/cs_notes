/* binary_tree.c - Binary Tree implementation in C
 */

#include <stdio.h>
#include "binary_tree.h"
#include "bfs.h"
#include "dfs.h"
#include "trees.h"

static void preorder_traversal(node_t *top);
static void inorder_traversal(node_t *top);
static void postorder_traversal(node_t *top);

/* insertion */
void insertion()
{
    printf("Insertion");
}

/* deletion */
void deletion()
{
    printf("Deletion");
}

/* traversal */
void traversal(node_t *top, technique_t tech)
{
    printf("Traversal");

    switch (tech)
    {
        case PREORDER:
            preorder_traversal(top);
            break;
        case INORDER:
            inorder_traversal(top);
            break;
        case POSTORDER:
            postorder_traversal(top);
            break;
        default:
            break;
    }
}

static void preorder_traversal(node_t *top)
{
    printf("Preorder Traversal\n");
    return;
}

static void inorder_traversal(node_t *top)
{
    printf("Inorder Traversal\n");
    return;
}

static void postorder_traversal(node_t *top)
{
    printf("Postorder Traversal\n");
    return;
}

/*
 * Driver code to test binary tree implementation
 */
int main()
{
    node_t *top_level;

    top_level = malloc(sizeof(node_t));
    if(top_level == NULL) {
        fprintf(stderr, "Memory allocation failed");
    }

    printf("Binary Tree Example");

    /* Pointer pointing to itself */
    top_level->value = 10;
    top_level->left = top_level;
    top_level->right = top_level;

    printf("Top Level:\n");
    printf("val: %d\n", top_level->value);
    printf("left->val: %d\n", top_level->left->value);
    printf("right->val: %d\n", top_level->right->value);

    traversal(top_level, PREORDER);

    return 0;
}
