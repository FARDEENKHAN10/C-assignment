#include<iostream>
using namespace std;
class complex
{
private:
    int a,b;
public:
    void set(int x,int y)
    {
        a=x;
        b=y;
    }
    complex add(complex c)
    {
        complex t;
        t.a=a+c.a;
        t.b=b+c.b;
        return t;
    }
    void show()
    {
        cout<<a<<"+"<<b<<"i";
    }
};
int main()
{
    complex c1,c2,c3;
    c1.set(3,4);
    c2.set(5,7);
    c3=c1.add(c2);
    c3.show();
    return 0;

}
