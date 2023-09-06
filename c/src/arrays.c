#include "arrays.h"

#include <stdbool.h>
#include <stdio.h>

#define ARRAY_SIZE 10


int main(void)
{
    // int array[ARRAY_SIZE];
    // int i;
 
    // // Fill array elements
    // for(i = 0; i < ARRAY_SIZE; i++)
    // {
    //     array[i] = i;
    // }
 
    // // Print array elements
    // for(i = 0; i < ARRAY_SIZE; i++)
    // {
    //     printf("%d\n", array[i]);
    // }

    array *arr;
    int size = 10;

    arr = array_create(size, sizeof(int));

    // Fill array
    for (int i = 0; i < size; i++) {
        int num = i * i;
        array_set(arr, i, &num);
    }

    // Print array elements
    for (int i = 0; i < size; i++) {
        array_get(arr, i);
    }

    return 0;
}


array *array_create(size_t size, size_t element_size)
{
    array *a;

    printf("Array created\n");

    return a;
}


bool array_set(array *a, size_t index, void *element)
{
    printf("Array set\n");

    return true;
}


void *array_get(array *a, size_t index)
{
    void *element;

    printf("Array get\n");

    return element;
}
