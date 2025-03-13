#include <iostream>
using namespace std;

class Solution 
{
    public:
        bool isPalindrome(int x) 
        {
            long a = x, b = 0;
            if (x < 0)
            {
                return false;
            }
            while (x > 0)
            {
                long c = x  % 10;
                b = b * 10 + c;
                x /= 10;
            }
            if (a == b)
            {
                return true;
            }
            else
            {
                return false;
            }
            
        }
};