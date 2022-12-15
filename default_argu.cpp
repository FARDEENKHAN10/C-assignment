#include<iostream>
using namespace std;
int sum(int,int,int=0);
int sum(int a,int b,int c)
{
    return(a+b+c);
}
int main()
{
    int x=4,y=6,z=5;
    cout<<sum(x,y)<<endl;
    cout<<sum(x,y,z);
    return 0;
}
