#include <iostream>
#include <vector>
#include <unordered_set> 
using namespace std;

class Solution 
{
    public:
        int minOperations(vector<int>& nums, int k) 
        {
            unordered_set<int> a;
            for(int b : nums)
            {
                if (b < k)
                    return -1;
                else if (b > k)
                {
                    a.insert(b);
                }
            }
            return a.size();
        }
};