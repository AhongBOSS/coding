#include <iostream>
using namespace std;

class Solution 
{
public:
    double myPow(double x, int n) 
    {
        long long N = n;
        double sum = 1;
        if(N == 0)
        {
            return 1;
        }

        if (N < 0)
        {
            N = -N;
            x = 1 / x;
        }
        while (N > 0)
        {
            if(N % 2 == 1)
            {
                sum *= x;
            }
            x *= x;
            N /= 2;
        }
        
        return sum;
             
    }
};

int main()
{
    Solution solu;
    double a = solu.myPow(2.00000, -2);
    cout << a << endl;
}