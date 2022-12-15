#include<iostream>
using namespace std;
class item
{
    int i;
public:
    item()
    {

    }
    item(int x)
    {
        i=x;
    }
    void show()
    {
        cout<<"i="<<i;
    }
    operator int()
    {
        cout<<"int() called for dollar"<<endl;
        return i;
    }
};
class product
{
    int a,b;
public:
    product(int x,int y)
    {
        a=x; b=y;
    }
    product()
    {

    }
    void show()
    {
        cout<<"a="<<a<<endl;//" b="<<b<<endl;
    }
    operator int()
    {
        cout<<"int() called for dollar"<<endl;
        return a;
    }
    operator item()
    {
        return a*b;
    }
};

int main()
{
    item i;
    product p(4,5);
    i=p;
    i.show();
    return 0;
}
