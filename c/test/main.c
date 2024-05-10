#include <stdio.h>

#include "linear_search.h"

int main(void)
{
    printf("Algorithms in C\n");

    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int pos;
    
    pos = linear_search(arr, SIZE_OF_ARRAY(arr), 6);
    printf("Target 6 is at position: %d\n", pos);
    pos = linear_search(arr, SIZE_OF_ARRAY(arr), 255);
    printf("Target 255 is at position: %d\n", pos);

    return(0);
}
