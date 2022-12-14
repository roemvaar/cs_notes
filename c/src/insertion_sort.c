// insertion_sort.c - Insertion Sort implementation in C

#include <stdio.h>
#include "utils.h"

void swap(int *arr, int a, int b);
void insertion_sort(int *nums, size_t size);

void swap(int *arr, int a, int b)
{
	int temp = arr[a];
	arr[a] = arr[b];
	arr[b] = temp;
}

void insertion_sort(int *nums, size_t size)
{
	for (int i = 1; i < size; ++i) {
		int j = i;

		while ((j - 1 >= 0) && (nums[j] < nums[j - 1])) {
			swap(nums, j, j - 1);
			--j;
		}
	}
}

int main()
{
	int nums[] = {6, 5, 3, 1, 8, 7, 2, 4};

	print_array(nums, 8);
	insertion_sort(nums, 8);
	print_array(nums, 8);

	return 0;
}

