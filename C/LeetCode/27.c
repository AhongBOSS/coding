#include <stdio.h> 
// 暴力解O(n*n)

int removeElement(int* nums, int numsSize, int val) 
{
    for(int i = 0;  i <= numsSize - 1; i++)
    {
        if (nums[i] == val)
        {
            for(int j = i + 1; j <= numsSize - 1; j++)
            {
                nums[j - 1] = nums[j];
            }
            i --;
            numsSize --;
        }
        
    }
    return numsSize;
}