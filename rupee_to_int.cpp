#include<iostream>
using namespace std;
class rupee
{
    int r;
public:
    rupee(){}
    rupee(int x)
    {
        r=x;
    }
    operator int()
    {
        return r;
    }
    void display()
    {
        cout<<"r="<<r;
    }
};
int main()
{
    rupee r1=5;
    int x;
    x=r1;
    cout<<x;
    return 0;
}
