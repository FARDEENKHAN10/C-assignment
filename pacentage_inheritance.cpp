#include<iostream>
using namespace std;
class marks
{
public:
    int x,y,z;
    void input_marks()
    {
        cout<<"enter marks in hindi outoff 100"<<endl;
        cin>>x;
        cout<<"enter marks in english outoff 100"<<endl;
        cin>>y;
        cout<<"enter marks in math outoff 100"<<endl;
        cin>>z;
    }
};
class addmarks:public marks
{
public:
    int s;
    void add()
    {
        s=x+y+z;
    }
};
class parcentage:public addmarks
{
public:
    //cout<<x<<endl;
    int x;

    void display()
    {
        x=s/3;
        cout<<"parcentage is "<<x<<"%"<<endl;
    }
};
int main()
{
    addmarks s;
    parcentage p;
    p.input_marks();
    p.add();
    p.display();
    return 0;
}
