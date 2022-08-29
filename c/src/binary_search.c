#include <stdio.h>
#include <binary_search.h>
#include <bool.h>

bool binarySearchRecursion(int *array, int left, int right, int target)
{
    bool isInArray = false;

    printf("Binary Search (Recursion) in C");

    return isInArray;
}

bool binarySearchIterative(int *array, int left, int right, int target)
{
    printf("Binary Search (Iterative) in C");

}

printArray(int *array, int size)
{
    printf("[");
    for(int i = 0; i < size; i++) {
        printf("%d, ", array[i]);
    }
    printf("]\n");
}

/* Driver code
 * TODO: Implement unit test
 */
int main()
{
    int arrayA = {0,324,45,234,435,-2,0};
    int arrayB = {0,324,45,234,435,-2,0};

    insertionSort(arrayA, sizeof(arrayA));
    insertionSort(arrayB, sizeof(arrayB));

    binarySearchRecursion(arrayA, 0, sizeof(arrayA), 0);
    binarySearchIterative(arrayB, 0, sizeof(arrayB), 5);


    return 0;
}
