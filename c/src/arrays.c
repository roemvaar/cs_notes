#include "arrays.h"

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


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


void array_set(array *a, size_t index, void *element)
{
    size_t offset;

    if (a == NULL) {
        fprintf(stderr, "failed to access array\n");
        exit(EXIT_FAILURE);
    }

    if (index >= 0 && index < a->size) {
        offset = index * a->element_size;
    }
    else {
        fprintf(stderr, "index out of range\n");
        exit(EXIT_FAILURE);
    }
    
    memcpy(a->elements + offset, element, a->element_size);
}


void *array_get(const array *a, size_t index)
{
    void *element;
    size_t offset;

    if (a == NULL) {
        fprintf(stderr, "failed to access array\n");
        exit(EXIT_FAILURE);
    }

    if (index >= 0 && index < a->size) {
        offset = index * a->element_size;
    }
    else {
        fprintf(stderr, "index out of range\n");
        exit(EXIT_FAILURE);
    }

    element = a->elements + offset;

    return element;
}
