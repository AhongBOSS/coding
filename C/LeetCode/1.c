#include <stdio.h>
//暴力破解法

int* twoSum(int* nums, int numsSize, int target, int* returnSize) 
{
    int *a = malloc(sizeof(int)*2);
    for (int i = 0; i < numsSize-1; i++)
    {
        for (int j = i+1; j < numsSize; j++)
        {
            if(nums[i] + nums[j] == target)
            {   
                a[0] = i;
                a[1] = j;
                * returnSize = 2;
                return a;
            }
        }
    }
    free(a);
    return 0;
    
}