#include<iostream>
using namespace std;
void prime(int n)
{
    int i,flag=0;
    for(i=2;i<n;i++)
    {
        if(n%i==0)
            flag=1;
    }
    if(flag==0)
        cout<<n<<" is prime number";
    else
        cout<<n<<" is not prime number";
}
int main()
{
    int x;
    cout<<"enter a number";
    cin>>x;
    prime(x);
    return 0;
}
