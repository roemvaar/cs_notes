// Linear Search
#include <stdio.h>
//#include "linear_search.h"

#define SIZE_OF_ARRAY(X) (sizeof(X)/sizeof(X[0]))

/* 
 * Returns the position of the first appereance of target, 
 * or -1 if target is not present in the array
 */
int linear_search(int *arr, size_t sz, int target)
{
    int pos = -1;

    for(size_t i = 0; i < sz; i++) {
        if(target == arr[i]) {
            pos = i;
            break;
        }
    }
    
    return pos;
}

/* TO DO - Delete - only meant for testing until the correct testing
 * strategy is implemented */
int main(void)
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int pos;
    
    pos = linear_search(arr, SIZE_OF_ARRAY(arr), 6);
    printf("Target 6 is at position: %d\n", pos);
    pos = linear_search(arr, SIZE_OF_ARRAY(arr), 255);
    printf("Target 255 is at position: %d\n", pos);
    
    return 0;        
}
