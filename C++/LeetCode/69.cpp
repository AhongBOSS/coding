#include <iostream>
using namespace std;

class Solution {
    public:
        int mySqrt(int x) 
        {
            int a = 1;
            while(a*a<=x)
            {
                a++;
            }
            return a-1;
        }
    };