// 283. Move Zeroes
// Given an array nums, write a function to move all 0's to the end of it while
// maintaining the relative order of the non-zero elements.
// https://leetcode.com/problems/move-zeroes/

void moveZeroes(int* nums, int numsSize)
{
    int currPos = 0;    // Position to store non-zero element
    
    // Store non-zero elements
    for(int i = 0; i < numsSize; i++)
    {
        if(nums[i] != 0)
        {
            nums[currPos] = nums[i];
            currPos++;
        }
    }
    
    // Store zero elements at the end of the array
    for(int i = currPos; i < numsSize; i++)
    {
        nums[i] = 0;
    }
}

