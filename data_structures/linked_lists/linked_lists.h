/* 
 * Linked Lists in C
 */ 

#ifndef LINKED_LISTS_H
#define LINKED_LISTS_H

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct IntElement
{
    struct IntElement *next;
    int data;
} IntElement;

void traverseList(IntElement *pointer_to_head);
void reverseTraverseList(IntElement *pointer_to_head);
void deleteList(IntElement *pointer_to_head);
void insertElement();
void deleteElement();
void updateElement(IntElement **head, int position);
bool searchByValue(IntElement *pointer_to_head, int target);

#endif  /* LINKED_LISTS_H */
