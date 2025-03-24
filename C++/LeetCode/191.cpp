#include <iostream>
using namespace std;

class Solution {
    public:
        int hammingWeight(int n) 
        {
            int sum = 0;
            while(n)
            {
                if(n % 2 == 1)
                {
                    sum++;
                }
                n/=2;
            }
            return sum;    
        }
    };