#include <stdio.h>
#include "linked_lists/linked_list.h"


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

