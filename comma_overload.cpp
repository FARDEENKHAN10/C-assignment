#include<iostream>
using namespace std;
class cordinate
{
    int x,y,z;
public:
    void set(int a,int b,int c)
    {
        x=a;
        y=b;
        z=c;
    }
    void show()
    {
        cout<<"x="<<x<<" y="<<y<<" z="<<z<<endl;
    }
    cordinate operator,(cordinate c)
    {
        cordinate t;
        t.x=c.x;
        t.y=c.y;
        t.z=c.z;
        return t;
    }
   // cordinate operator,(cordinate c) one way;
    //{
     //   return c;
    //}
};
int main()
{
    cordinate c1,c2,c3,c4;
    c1.set(1,2,3);
    c2.set(4,3,6);
    c4.set(3,4,5);
    c3=(c1,c2,c4);
    c3.show();
    return 0;
}
