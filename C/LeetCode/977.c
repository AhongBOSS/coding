#include <stdio.h>

int *sort(int * a, int size)
{
    for(int j = 0; j <= size - 1; j++)
    {
        if (a[j] > a[j + 1])
        {
            int temp = a[j];
            a[j] = a[j + 1];
            a[j + 1] = temp; 
        }
    }
    return a;
}

int* sortedSquares(int* nums, int numsSize, int* returnSize) 
{
    for(int i = 0; i <= numsSize -1; i++)
    {
        nums[i] = nums[i] * nums[i];
    }
    sort(nums, numsSize);
    return nums;
}