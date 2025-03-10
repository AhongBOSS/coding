#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int a,b,c,D;
    double q,w;
    cin >> a >> b >> c;
    D = (b*b) - (4*a*c);
    if (D>0)
    { 
        q = (-b+sqrt(D)) / (2.0*a);
        w = (-b-sqrt(D)) / (2.0*a); 
        cout << "Two different roots x1=" << q <<" , x2="<< w <<"\n";
    } 
    else if (D==0)
    {
        q = -b / (2.0*a);
        cout << "Two same roots x=" << q << "\n";
    }
    else
    {
        cout << "No real root\n";
    }
    


    return 0;
}