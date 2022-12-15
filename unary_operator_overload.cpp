#include<iostream>
using namespace std;
class complex
{
    int a,b;
public:
    void set(int x,int y)
    {
        a=x;
        b=y;
    }
    void show()
    {
        cout<<"a="<<a<<" b="<<b<<endl;
    }
    complex operator-()
    {
        complex temp;
        temp.a=-a;
        temp.b=-b;
        return temp;
    }
    complex operator--()
    {
        complex temp;
        temp.a=--a;
        temp.b=--b;
        return temp;
    }
    complex operator--(int)
    {
        complex t;
        t.a=a--;
        t.b=b--;
        return t;
    }
};
int main()
{
    complex c1,c2,c3;
    c1.set(3,5);
    c2.set(6,8);
    c3=-c1;
    c3.show();
    c3=--c2;
    c3.show();
    c3=c2--;
    c3.show();
    c2.show();
    return 0;
}
