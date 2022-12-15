#include<iostream>
using namespace std;
class A
{
public:
    A()
    {
        cout<<"default constructor of A called"<<endl;
    }
};
class B:public A
{
public:
    B()
    {
        cout<<"default constructor of B called"<<endl;
    }
};
class C:public B
{
public:
    C()
    {
        cout<<"default constructor of C called"<<endl;
    }
};
int main()
{
    C c;
    return 0;
}
