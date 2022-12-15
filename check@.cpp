#include<iostream>
using namespace std;
int main()
{
    char email[100];
    int i,x=0;
    cout<<"enter your email id"<<endl;
    cin>>email;
    try
    {
       for(i=0;email[i];i++)
       {
           if(email[i]=='@')
              x=1;
       }
      if(x==0)
        throw "invalid email id";
       cout<<email;
    }
    catch(const char *msg)
    {
        cout<<msg;
    }
    return 0;
}
