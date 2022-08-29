/* 
 * Linked Lists in C
 */ 

#ifndef LINKED_LISTS_H
#define LINKED_LISTS_H

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    struct IntElement *next;
    int data;
} node_t;

void printListElements(node_t *head);
bool deleteElement(node_t **head, node_t *deleteMe);
void deleteList(node_t **head);
void updateElement(node_t **head, int position);
bool isInList(node_t **head, int target);

#endif  /* LINKED_LISTS_H */
