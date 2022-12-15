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
    complex(int x)
    {
        a=x;
        b=x;
    }
    complex()
    {

    }
};
int main()
{
    complex c;
    int x=5;
    c=x;
    c.show();
    return 0;
}
