#include<iostream>
using namespace std;
class rupee
{
    int x;
public:
    rupee()
    {
        cout<<"dc called for"<<endl;
    }
    rupee(int n)
    {
        cout<<"pc called for rupee"<<endl;
        x=n;
    }
    void display()
    {
        cout<<"rupee is "<<x;
    }
    operator int()
    {
        cout<<"int() called for dollar"<<endl;
        return x;
    }
};
class dollar
{
    int x;
public:
    dollar()
    {
        cout<<"dc called for dollar"<<endl;
    }
    dollar(int n)
    {
        cout<<"pc called for dollar"<<endl;
        x=n;
    }
    void display()
    {
        cout<<"dollar is "<<x;
    }
    operator int()
    {
        cout<<"int() called for dollar"<<endl;
        return x;
    }
    operator rupee()
    {
        cout<<"rupee() called for dollar"<<endl;
        return x*100;
    }
};
int main()
{
    rupee r;
    dollar d=6;
    r=d;
    r.display();
    return 0;
}
