#include<iostream>
using namespace std;
class B;
class A
{
    int a=5;
    friend int add(A&,B&);
};
class B
{
    int b=3;
    friend int add(A&,B&);
};
int add(A &x,B &y)
{
    int c;
    c=x.a+y.b;
    return c;
}
int main()
{
    A a;
    B b;
    cout<<add(a,b);
    return 0;
}
