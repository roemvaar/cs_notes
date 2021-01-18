#include <math.h>

// Efficient solution - this solution is based on the two-pointer method
// as the array is already sorted we can compare the first and last element
// to check which is bigger and process with the result

// Algorithm - iterates from last element down to the first element:
// 1. Initialize left = 0, right = returnSize - 1
// 2. if abs(left) >= abs(right) then store square(arr(left)) at the end 
// of result array and increment left pointer
// 3. else store square(arr[right]) in the result array and decrement right
// pointer
// 4. Decrement index of result array

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* sortedSquares(int* nums, int numsSize, int* returnSize)
{
    int* squared_nums;
    int left = 0;
    int right = numsSize - 1;
    int index;
    
    // Allocate memory for return array
    *returnSize = numsSize;
    squared_nums = (int*)malloc(*returnSize * sizeof(int));
    if(squared_nums == NULL)
    {
        fprintf(stderr, "Memory couldn't be allocated correctly");
        return((int*)-1);
    }
    
    for(index = *returnSize - 1; index >= 0; index--)
    {
        if(abs(nums[left]) > abs(nums[right]))
        {
            squared_nums[index] = pow(nums[left],2);
            left++;
        }
        else
        {
            squared_nums[index] = pow(nums[right], 2);
            right--;
        }
    }

    return(squared_nums);
}
