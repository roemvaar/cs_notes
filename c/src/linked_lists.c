/* 
 * Linked Lists in C
 */ 

#include "linked_lists.h"

static IntElement *createNewElement()
{
    IntElement *newElement; 
    newElement = (IntElement *)malloc(sizeof(IntElement));
    newElement->next = NULL;

    return &newElement;
}

void printListElements(IntElement *head)
{
    IntElement *elem;
    elem = head;

    while(elem != NULL) {
        printf("%d ", elem->data);
        elem = elem->next;
    }

    printf("\n");
}

bool deleteElement(IntElement **head, IntElement *deleteMe)
{
    IntElement *elem;

    if(!head || !*head || !deleteMe)    // Check for null pointers
        return false;

    elem = *head;

    if(deleteMe == *head) { // Special case for head 
        *head = elem->next;
        free(deleteMe);
        return true;
    }

    while(elem) {
        if(elem->next == deleteMe) {
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

void insertElement()
{
    return;
}


void updateElement(IntElement **head, int position)
{
    return;
}


bool isInList(IntElement **head, int target)
{
    IntElement *elem;
    elem = head;
    
    while(elem != NULL) {
        if(elem->data == target)
            return true;
        elem = elem->next;
    }

    return false;
}
