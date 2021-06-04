/** 
 * Easy - https://leetcode.com/problems/running-sum-of-1d-array/
 * Note: The returned array must be malloced, asumme caller calls free()
 */
int* runningSum(int* nums, int numsSize, int* returnSize)
{
    int* sum;
    int i;

    *returnSize = numsSize;
    
    sum = (int*)malloc(numsSize * sizeof(int));
    if(sum == NULL)
    {   
        printf("Error! memory not allocated.");
        exit(0);
    }

    for(i = 0; i < numsSize; i++)
    {
        if(i == 0)
        {
            sum[i] = nums[i];
        }
        else
        {
            sum[i] = sum[i-1] + nums[i] ;
        }
    }

    return sum;
}
