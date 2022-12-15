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
    complex operator++(int)
    {
        complex temp;
        temp.a=a++;
        temp.b=b++;
        return temp;
    }
};
int main()
{
    complex c1,c2,c3;
    c1.set(3,6);
    c2.set(5,7);
   // (c1++).show();
    //c1.show();
    c3=c1++;
    c3.show();
    c3.show();
}
