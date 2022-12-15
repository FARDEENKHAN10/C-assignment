#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"enter denominator and nionimitor"<<endl;
    cin>>a>>b;
    try
    {
        if(b==0)
            throw b;
        if(b==1)
            throw "divided by one";
        c=a/b;
    }
    catch(int x)
    {
        cout<<"divide by "<<x<<endl;
    }
    catch(const char *msg)
    {
        cout<<msg<<endl;
    }
    cout<<c;
    return 0;
}
