#include <stdio.h>
#include <stdbool.h>

bool isPalindrome(int x) 
{
    if (x < 0)
    {
        return false;
    }
    long a = x, b = 0;
    while (x > 0)
    {
        long c = x % 10;
        b = b * 10 + c;
        x /= 10;
    }
    if(a == b)
    {
        return true;
    }
    else
    {
        return false;
    }
    

}