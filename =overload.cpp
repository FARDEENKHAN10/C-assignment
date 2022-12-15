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
    void operator=(complex c)
    {
        a=c.a;
        b=c.b;
        //return *this;
    }
};
int main()
{
    complex c1,c2;
    c1.set(3,4);
    c1.show();
    c2=c1;
    c2.show();
    return 0;
}
