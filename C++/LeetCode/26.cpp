#include <iostream>
#include <vector>
using namespace std;

class Solution 
{
    public:
        int removeDuplicates(vector<int>& nums)
        {
            int j = 0;
            for(int i = 1; i < nums.size(); i++)
            {
                if(nums[i] != nums[j])
                {
                    nums[++j] = nums[i];
                }
            }
            return j + 1;
        }
};

int main()
{
    Solution R;
    vector<int> a = {1,1,2};
    vector<int> b = {0,0,1,1,1,2,2,3,3,4};

    cout << "第一次測試" << R.removeDuplicates(a) << endl;
    cout << "第二次測試" << R.removeDuplicates(b) << endl;
}

//[1,1,2] 
//[0,0,1,1,1,2,2,3,3,4]