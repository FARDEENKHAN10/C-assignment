#include<iostream>
using namespace std;
class invent1
{
    float a,b;
public:
    invent1(float x,float y)
    {
        a=x;
        b=y;
    }
    invent1()
    {

    }
    void show()
    {
        cout<<"a="<<a<<" b="<<b<<endl;
    }
    operator float()
    {
        return (a+b);
    }
    int getA()
    {
        return a;
    }
    int getB()
    {
        return b;
    }

};
class invent2
{
    float a,b;
public:
    invent2(){}
    invent2(float x,float y)
    {
        a=x; b=y;
    }
    void show()
    {
        cout<<"a="<<a<<" b="<<b<<endl;
    }
    invent2(invent1 v)
    {
        a=v.getA();
        b=v.getB();
    }
};
int main()
{
    invent1 x(3.4,4.5);
    float d;
    d=x;
    cout<<d<<endl;
    invent2 y;
    y=x;
    y.show();
    return 0;
}
