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

//void deleteElement(IntElement **head, int postition);
bool deleteElement(IntElement **head, IntElement *deleteMe);
void deleteList(IntElement **head);
void traverseList(IntElement **head);
void insertElement(IntElement **head, int position);
int searchValue(IntElement **head, int target);
void updateElement(IntElement **head, int position);
void printLinkedList(IntElement * pointer_to_head);

#endif  /* LINKED_LISTS_H */
