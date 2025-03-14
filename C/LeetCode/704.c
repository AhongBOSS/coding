#include <stdio.h>

int search(int* nums, int numsSize, int target) 
{
    int left = 0, rigth = numsSize - 1, mid = numsSize / 2;
    while (left <= rigth)
    {
        if(nums[mid] > target)
        {
            rigth = mid - 1;
            mid = (left + rigth) / 2;
        }
        else if (nums[mid] < target)
        {
            left = mid + 1;
            mid = (left + rigth) / 2;
        }
        else if (nums[mid] == target)
        {
            return mid;
        }    
    }

    return -1;
    
            
}