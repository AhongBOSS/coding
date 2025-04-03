#include <iostream>
using namespace std;

class Solution 
{
public:
    int climbStairs(int n) 
    {
        int i = 0,a = 1, b = 1, sum = 0;
        while (i < n -1)
        {
            sum = a + b;
            a = b;
            b = sum;
            i++;
        }
        return b;             
    }
};