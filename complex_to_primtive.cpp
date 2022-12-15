#include<iostream>
using namespace std;
class complex
{
    int a,b;
public:
    void set(int x,int y)
    {
        a=x;b=y;
    }
    void show()
    {
        cout<<"a="<<a<<" b="<<b<<endl;
    }
    operator int()
    {
        return a;
    }

};
int main()
{
    complex c;
    int x;
    c.set(4,3);
    c.show();
    x=(int)c;//c.operator int();
    cout<<x;
}
