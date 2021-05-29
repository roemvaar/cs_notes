/* 
 * Linked Lists in C
 */ 

#include "linked_lists.h"


bool deleteElement(IntElement **head, IntElement *deleteMe)
{
    IntElement *elem;

    if(!head || !*head || !deleteMe)    // Check for null pointers
        return false;

    elem = *head;
    if(deleteMe == *head)   // Special case for head 
    {
        *head = elem->next;
        free(deleteMe);
        return true;
    }

    while(elem)
    {
        if(elem->next == deleteMe)
        {
            // elem is element preceding deleteMe
            elem->next = deleteMe->next;
            free(deleteMe);
            return true;
        }
        elem = elem->next;
    }
    // deleteMe not found
    return false;
}


void deleteList(IntElement **head)
{
    IntElement *deleteMe = *head;

    while(deleteMe)
    {
        IntElement *next = deleteMe->next;
        free(deleteMe);
        deleteMe = next;
    }

    *head = NULL;
}


void traverseList(IntElement **head)
{
    return;   
}


void insertElement(IntElement **head, int position)
{
    return;
}


int searchValue(IntElement **head, int target)
{
    return 0;
}


void updateElement(IntElement **head, int position)
{
    return;
}

void printLinkedList(IntElement * pointer_to_head)
{
    IntElement * iterator;

    iterator = pointer_to_head;

    while(iterator != NULL) {
        printf("%d ", iterator->data);
        iterator = iterator->next;
    }

    printf("\n");

}