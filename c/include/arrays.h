#ifndef ARRAYS_H
#define ARRAYS_H

#include <stdbool.h>
#include <stdio.h>


typedef struct {
    size_t size;
    size_t element_size;
    void *elements;
} _array;

typedef _array array;

array *array_create(size_t size, size_t element_size);
void array_destroy(array *a);
bool array_set(array *a, size_t index, void *element);
void *array_get(array *a, size_t index);

#endif // ARRAYS_H
