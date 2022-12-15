#include<iostream>
using namespace std;
int main()
{
    int x,i;
    cout<<"enter your area pincode"<<endl;
    cin>>x;
    try
    {
        for(i=0;x!=0;i++)
            x=x/10;
        if(i!=6)
            throw "invalid pin code";
        cout<<"valid pin code"<<endl;
    }
    catch(const char *msg)
    {
        cout<<msg<<endl;
    }
    return 0;
}
