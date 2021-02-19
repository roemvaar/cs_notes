// Linked Lists in C

#include <stdio.h>
#include <stdbool.h>

typedef struct IntElement
{
    struct IntElement *next;
    int data;
} IntElement;


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


int main(void)
{
    printf("Linked Lists in C\n");
    
    IntElement first;

    first.next = NULL;
    first.data = 5;

    printf("first->next = %p\n", first.next);
    printf("first->data = %d\n", first.data);

    return 0;
}

