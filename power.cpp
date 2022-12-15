#include<iostream>
using namespace std;
int power(int x,int y)
{
    int i,sum=1;
    for(i=0;i<y;i++)
    {
        sum=sum*x;
    }
    return sum;
}
int main()
{
    int a,b;
    cout<<"enter a number and its power";
    cin>>a>>b;
    cout<<a<<" power "<<b<<" is equal to "<<power(a,b);
    return 0;
}
