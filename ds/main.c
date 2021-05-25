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


int main(void)
{
    printf("Data Structures in C\n");
    
    IntElement first;

    first.next = NULL;
    first.data = 5;

    printf("first->next = %p\n", first.next);
    printf("first->data = %d\n", first.data);

    return 0;
}

