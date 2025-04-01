#include <stdio.h>

bool isValid(char* s) 
{
    int a = 0;
    for(int i = 0; s[i]; i++)
    {
        char b = s[i];
        if(b == '(')
        {
            s[a++] = ')';
        }
        else if (b == '[')
        {
            s[a++] = ']';
        }
        else if (b == '{')
        {
            s[a++] = '}';
        }
        else if (a == 0 || s[--a] != b)
        {
            return false;
        }
    }
    return a == 0;


} 