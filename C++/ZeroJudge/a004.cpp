#include <iostream>
using namespace std;

int main()
{
    int a;
    while (cin >> a)
    {
        if((a % 4 == 0 and a % 100 != 0) or a % 400 == 0 )
        {
            cout << "閏年\n";
        }
        else
        {
            cout << "平年\n";
        }
    }
    

    return 0;
}