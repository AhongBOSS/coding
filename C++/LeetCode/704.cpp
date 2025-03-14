#include <iostream>
#include <vector>
using namespace std;

class Solution 
{
    public:
        int search(vector<int>& nums, int target) 
        {
            int left = 0, right = size(nums) - 1 , mid = size(nums) / 2;
            while (left <= right)
            {
                mid = (left + right) / 2;
                if(nums[mid] > target)
                {
                    right = mid - 1 ;
                }
                else if (nums[mid] < target)
                {
                    left = mid + 1;
                }
                else if (nums[mid] == target)
                {
                    return mid;
                }
                
                
            }
            return -1 ;
            
        }
};