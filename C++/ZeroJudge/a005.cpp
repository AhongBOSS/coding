#include <iostream>
using namespace std;

int main()
{
    int a;
    cin >> a;
    for(int i = 0; i <= a-1 ; i++)
    {
        int b[4];
        cin >> b[0] >> b[1] >> b[2] >> b[3];
        if(b[1] - b[0] == b[3] - b[2])
        {
            cout << b[0] << " " << b[1] << " " << b[2] << " " << b[3]  << " " << b[3] + (b[3] - b[2]) << "\n";
        }
        else
        {
            cout << b[0]  << " " << b[1] << " " << b[2]  << " " << b[3] << " " << b[3] * (b[3] / b[2]) << "\n";
        }

    }
    return 0;
}