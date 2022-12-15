#include<iostream>
using namespace std;
void change(int &x,int &y)
{
    int temp;
    temp=x;
    x=y;
    y=temp;
}
int main()
{
    int a,b;
    cout<<"enter two number";
    cin>>a>>b;
    change(a,b);
    cout<<"a="<<a<<" "<<"b="<<b;
    return 0;
}
