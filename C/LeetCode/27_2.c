#include <stdio.h>
//雙指針

int removeElement(int* nums, int numsSize, int val) 
{
    int i = 0;
    for(int j = 0; j <= numsSize - 1; j++)
    {
        if(val != nums[j])
        {
            nums[i++] = nums[j];
        }
    }
    return i;
}