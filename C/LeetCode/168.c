#include <stdio.h>

char* convertToTitle(int columnNumber) 
{
    char A[999];
    int i = 0;
    while (columnNumber > 0)
    {
        columnNumber--;
        A[i] = (columnNumber % 26) + 'A';  
        columnNumber /= 26;  
        i++;
    }
    return A;
}