#include <stdio.h>


int lengthOfLastWord(char* s) 
{
    int b = 0, sum = 0;
    int a = strlen(s) - 1;
    while (s[a] == ' ')
    {
        a--;
    }
    int c = a - 1;
    while (c >= 0 && s[c] != ' ')
    {
        c--;
    }
    return a - c;
    
}