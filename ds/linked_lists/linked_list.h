/* 
 * Linked Lists in C
 */ 

#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#include <stdio.h>
#include <stdbool.h>

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


#endif  /* LINKED_LIST_H */
