#include <iostream>
#include <string>
using namespace std;

class Solution 
{
    public:
        int lengthOfLastWord(string s) 
        {
            int a = s.length() - 1;
            while (s[a] == ' ')
            {
                a--;
            }
            int sum = a -1 ;
            while (sum >= 0 && s[sum] != ' ')
            {
                sum--;
            }
            return a - sum;
        }
};
