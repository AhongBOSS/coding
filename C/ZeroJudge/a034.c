#include <stdio.h>

int main()
{
    int a;
    while (scanf("%d",&a) != EOF)
    {
        int b[32];
        int c = 0;
        while (a)
        {
            b[c] = a%2;
            a /=2;
            c++;
        }
        for(int i = c - 1; i >= 0; i--)
        {
            printf("%d", b[i]);
        }
        printf("\n");
        

    }
    
}