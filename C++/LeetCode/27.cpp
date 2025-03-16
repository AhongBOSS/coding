#include <iostream>
#include <vector>
using namespace std;

class Solution  
{
    public:
        int removeElement(vector<int>& nums, int val) 
        {
            int i = 0;
            for(int j = 0; j <  size(nums); j++)
            {
                if(val != nums[j])
                {
                    nums[i++] = nums[j];
                }
            }

            return i;
        }
        
};