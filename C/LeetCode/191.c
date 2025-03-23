#include <stdio.h>

int hammingWeight(int n) 
{
    int sum = 0;
    while(n > 0)
    {
        if(n % 2 == 1)
            sum++;
        n /=2;
    }
    return sum;
}