#include<iostream>
using namespace std;
class Float
{
    float f;
public:
    Float operator+(Float x)
    {
        Float temp;
        temp.f=f+x.f;
        return temp;
    }
    Float operator*(Float x)
    {
        Float temp;
        temp.f=f*x.f;
        return temp;
    }
    Float operator/(Float x)
    {
        Float temp;
        temp.f=f/x.f;
        return temp;
    }
    Float operator-(Float x)
    {
        Float temp;
        temp.f=f-x.f;
        return temp;
    }
    void set(float y)
    {
        f=y;
    }
    void show()
    {
        cout<<"F="<<f<<endl;
    }
} ;
int main()
{
    Float f1,f2,f3;
    f1.set(3.4);
    f2.set(1.4);
    f3=f1+f2;
    f3.show();
    f3=f1-f2;
    f3.show();
    f3=f1*f2;
    f3.show();
    f3=f1/f2;
    f3.show();
    return 0;
}
