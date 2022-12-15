#include<iostream>
using namespace std;
class num
{
public:
    int a,b;
    void setnum(int x,int y)
    {
        a=x;b=y;
    }
};
class add:public num
{
    int c;
public:
    void addnum()
    {
        c=a+b;
    }
    void display()
    {
        cout<<"addition is "<<c;
    }
};
int main()
{
    int a,b;
    cout<<"enter 2 number";
    cin>>a>>b;
    add x;
    x.setnum(a,b);
    x.addnum();
    x.display();
    return 0;
}
