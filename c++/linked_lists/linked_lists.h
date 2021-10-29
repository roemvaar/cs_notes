/* 
 * Linked Lists in C
 */ 

#ifndef LINKED_LISTS_H
#define LINKED_LISTS_H

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct IntElement {
    struct IntElement *next;
    int data;
} IntElement;

void printListElements(IntElement *head);
bool deleteElement(IntElement **head, IntElement *deleteMe);
void deleteList(IntElement **head);
void updateElement(IntElement **head, int position);
bool isInList(IntElement **head, int target);

#endif  /* LINKED_LISTS_H */
 
