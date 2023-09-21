// #include "binary_search.h"

#include <stdio.h>


int binary_search_recursive(int *array, size_t size, int target)
{
    printf("Binary Search (Recursive) in C");
}


int binary_search_iterative(int *array, size_t size, int target)
{
    int index = -1;
    int left = 0;
    int right = size - 1;

    while (left <= right) {
        int mid = ((right - left) / 2) + left;

        if (array[mid] == target) {
            index = mid;
            break;
        }
        else if (array[mid] < target) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }

    return index;
}


/*
 * Driver code
 */
int main()
{
    // int array_a = {-2, 0, 45, 234, 324, 435};
    int array_b[] = {-2, 0, 45, 234, 324, 435};

    // binary_search_recursive(array_a, sizeof(array_a) 0);
    printf("%d\n", binary_search_iterative(array_b, sizeof(array_b), 324));
    printf("%d\n", binary_search_iterative(array_b, sizeof(array_b), 5));

    return 0;
}
