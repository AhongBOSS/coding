#include <iostream>
using namespace std;


class R
{
    public:
        int len, wid;
    
    int A(int x = 0, int y = 0)
    {
        return x * y;
    }
    void B()
    {
        cout << "請輸入矩形的長度：";
        cin >> len;
    }
    void C()
    {
        cout << "請輸入矩形的寬度：";
        cin >> wid;
    }
    void D()
    {
        area = A(len, wid);
         
    }
    void E()
    {
        cout << "矩形的長度為：" << len << endl;
        cout << "矩形的寬度為：" << wid << endl;
        cout << "矩形的面積為：" << area << endl;
        cout << "矩形的周長為：" << per << endl;
    }
    int F(int x = 0, int y = 0)
    {
        return x * 2 + y * 2;
    }
    void G()
    {
        per = F(len, wid);
        
    }
    
    
    private:
        int area, per;
        

}; 

int main()
{
    R r;
    r.B();
    r.C();
    r.D();
    r.F();
    r.G();
    r.E();
    
}

