#include<iostream>
using namespace std;
class minute
{
    int m;
public:
    minute(int x)
    {
        m=x;
    }
    minute(){}
    void display()
    {
        cout<<"time in minute "<<m;
    }
};
class time
{
    int hr,min;
public:
    time(){}
    time(int h,int m)
    {
        hr=h;
        min=m;
    }
    void display()
    {
        cout<<"hr="<<hr<<" min="<<min<<endl;
    }
    operator minute()
    {
        return((hr*60)+min);
    }
};
int main()
{
    time t1(2,20);
    minute m1;
    t1.display();
    m1=t1;
    m1.display();
    return 0;
}

