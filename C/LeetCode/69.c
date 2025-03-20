#include <stdio.h>
//暴力
int mySqrt(int x) 
{
    long long a = 1;
    while (a*a<=x)
    {
        a++;
    }
    return a-1;
    
}