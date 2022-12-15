#include<iostream>
using namespace std;
class complex
{
    int a,b;
public:
    void setdata(int a,int b)
    {
        this->a=a;
        this->b=b;
    }
    void show()
    {
        cout<<"a="<<a<<" b="<<b;
    }
};
int main()
{
    complex c;
    c.setdata(4,5);
    c.show();
    return 0;
}
