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

    // Create three int elements and pointer to head node
    IntElement elem_1;
    IntElement elem_2;
    IntElement elem_3;
    IntElement * pointer_to_head;

    // Set data and links
    pointer_to_head = &elem_1;

    elem_1.data = 0;
    elem_2.data = 1;
    elem_3.data = 2;

    elem_1.next = &elem_2;
    elem_2.next = &elem_3;
    elem_3.next = NULL;

    printLinkedList(pointer_to_head);
}   
