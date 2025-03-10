#include <stdio.h>

int main()
{
    int a,b,c;
    scanf("%d %d",&a,&b);
    c = (a*2+b)%3;
    if(c == 0)
    {
        printf("普通");
    }    
    else if (c == 1)
    {
        printf("吉");
    }
    else
    {
        printf("大吉");
    }
    
    return 0;
}