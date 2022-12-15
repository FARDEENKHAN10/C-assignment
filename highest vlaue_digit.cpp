#include<iostream>
using namespace std;
int digit(int x,int y)
{
    int a=x,b=y,i,j;
    for(i=0;a!=0;i++)
    {
        a=a/10;
    }
    for(j=0;b!=0;j++)
        b=b/10;
    cout<<i<<" "<<j<<endl;
    if(i>j)
        return x;
    else if(i==j)
        return 0;
    else
        return y;
}
int main()
{
    int x,y;
    cout<<"enter two number";
    cin>>x>>y;
    int s=digit(x,y);
    cout<<s<<" is highest digit number"<<endl;
    return 0;
}
