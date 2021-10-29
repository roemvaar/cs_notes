#include <stdio.h>

#include "arrays/arrays.h"
#include "graphs/graphs.h"
#include "hash_tables/hash_tables.h"
#include "heaps/heaps.h"
#include "linked_lists/linked_lists.h"
#include "queues/queues.h"
#include "stacks/stacks.h"
#include "trees/trees.h"
#include "vectors/vectors.h"


void testLinkedLists(void);


int main(void)
{
    printf("Data Structures in C\n");

    testLinkedLists();

    return 0;
}


void testLinkedLists(void)
{
    printf("Linked Lists in C\n");

    insertElement(2, 0);
    printLinkedList(pointer_to_head);
    printLinkedListReverse(pointer_to_head);

    insertElement(4, 0);
    printLinkedList(pointer_to_head);
    printLinkedListReverse(pointer_to_head);


    insertElement(6, 0);
    printLinkedList(pointer_to_head);
    printLinkedListReverse(pointer_to_head);
}
