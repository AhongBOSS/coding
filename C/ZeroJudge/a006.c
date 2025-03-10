#include <stdio.h>
#include <math.h>

int main()
{
    int a,b,c,D;
    double x,y;
    scanf("%d %d %d",&a,&b,&c);
    D = (b*b)-(4*a*c);
    if(D > 0)
    {
        x = (-b+sqrt(D)) / (2.0 * a);
        y = (-b-sqrt(D)) / (2.0 * a);
        printf("Two different roots x1=%.0lf , x2=%.0lf",x,y);
    }
    else if (D == 0)
    {
        x = (-b) / (2.0*a);
        printf("Two same roots x=%.0lf",x);
    }
    else
    {
        printf("No real root");
    }
    return 0;

}