#include<iostream>
using namespace std;
class integer
{
    int x;
public:
    void set(int a)
    {
        x=a;
    }
    integer()
    {
        cout<<"dc called"<<endl;
    }
    void show()
    {
        cout<<"x="<<x<<endl;
    }
    operator int()
    {
        return x;
    }
};
int main()
{
    integer t1;
    int x;
    t1.set(5);
    x=(int)t1;
    cout<<x;
}
