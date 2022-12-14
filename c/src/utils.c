// utils.c - Auxiliary functions to make development easier

#include <stdio.h>

void print_array(int *arr, size_t size)
{
	for (int i = 0; i < size; ++i) {
		printf("%d ", arr[i]);
	}
	
	printf("\n");
}

