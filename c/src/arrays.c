#include "arrays.h"

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define ARRAY_SIZE 10


int main(void)
{
    array *arr;
    int size = 10;

    arr = array_create(size, sizeof(int));

    // Fill array
    for (int i = 0; i < size; i++) {
        int num = i;
        array_set(arr, i, &num);
    }

    // Print array elements
    for (int i = 0; i < size; i++) {
        int *elem = array_get(arr, i);
        printf("A[%d] = %d\n", i, *elem);
    }

    return 0;
}


array *array_create(size_t size, size_t element_size)
{
    array *a;

    a = (array *)malloc(sizeof(array));
    if (a == NULL) {
        fprintf(stderr, "malloc failed in array_create\n");
        exit(EXIT_FAILURE);
    }

    a->elements = malloc(size * element_size);
    if (a->elements == NULL) {
        fprintf(stderr, "malloc failed in array_create\n");
        exit(EXIT_FAILURE);
    }

    a->size = size;
    a->element_size = element_size;

    return a;
}


void array_destroy(array *a)
{
    free(a->elements);
    free(a);
}


bool array_set(array *a, size_t index, void *element)
{
    int offset;

    offset = index * a->element_size;
    memcpy(a->elements + offset, element, a->element_size);

    return true;
}


void *array_get(array *a, size_t index)
{
    void *element;
    int offset;

    offset = index * a->element_size;
    element = a->elements + offset;

    return element;
}
