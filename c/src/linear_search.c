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
