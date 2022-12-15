#include<iostream>
using namespace std;
class shape
{
protected:
    double x,y;
public:
    void get_details()
    {
        cout<<"Enter length/height of triangle/rectangle"<<endl;
        cin>>x>>y;
    }
    virtual void display_area()
    {
        cout<<"area is "<<x*y;
    }
};
class rectangle:public shape
{
public:
    void display_area()
    {
        cout<<"area of rectangle is "<<x*y<<endl;
    }
};
class triangle:public shape
{
public:
    void display_area()
    {
        cout<<"area of triangle is "<<(0.5*x*y)<<endl;
    }
};
int main()
{
    shape *s1,*s2;
    rectangle r;
    triangle t;
    s1=&r;
    s2=&t;
    r.get_details();
    t.get_details();
    s1->display_area();
    s2->display_area();
    return 0;
}
