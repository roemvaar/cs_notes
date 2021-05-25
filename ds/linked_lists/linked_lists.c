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
    
}


void insertElement(IntElement **head, int position)
{

}


int searchValue(IntElement **head, int target)
{

}


void updateElement(IntElement **head, int position)
{

}
