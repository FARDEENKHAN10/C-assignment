#include<iostream>
using namespace std;
int main()
{
    int i,t;
    long long x;
    cout<<"enter your mobile number"<<endl;
    cin>>x;
    try
    {
        for(i=0;x!=0;i++)
            x=x/10;
        if(i!=10)
            throw "invalid number";
        cout<<"valid number"<<endl;
    }
    catch(const char *msg)
    {
        cout<<msg<<endl;
    }
    return 0;
}
