#include <stdio.h>
#include <string.h>

int* plusOne(int* digits, int digitsSize, int* returnSize) 
{
    for(int i = digitsSize - 1; i >= 0; i--)
    {
        digits[i] = digits[i] + 1;
        if(digits[i] != 10)
        {
            *returnSize = digitsSize;
            return digits;
        }
        if(digits[i] == 10)
        {
            digits[i] = 0;
        }
    }
    int* a = malloc(sizeof(int) * (digitsSize + 1));
    memset(a, 0, sizeof(int) * (digitsSize + 1));
    a[0] = 1;
    *returnSize = digitsSize + 1;
    return a;
}