/* 
 * Linked Lists in C
 */ 

#include "linked_lists.h"


static IntElement * createNewElement()
{
    IntElement * newElement; 
    newElement = (IntElement *)malloc(sizeof(IntElement));
    
    newElement->next = NULL;

    return &newElement;
}


void traverseList(IntElement * pointer_to_head)
{
    IntElement * iterator;

    iterator = pointer_to_head;

    while(iterator != NULL) {
        printf("%d ", iterator->data);
        iterator = iterator->next;
    }

    printf("\n");

}


void reverseTraverseList(IntElement * pointer_to_head)
{
    return;
}


//bool deleteElement(IntElement **head, IntElement *deleteMe)
void deleteElement()
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


void deleteList(IntElement * pointer_to_head)
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


bool searchByValue(IntElement * pointer_to_head, int target)
{
    return 0;
}
