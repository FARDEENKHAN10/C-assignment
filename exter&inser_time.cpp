#include<iostream>
using namespace std;
class time
{
    int hr,min,sec;
public:
    void operator==(time t)
    {
        if(hr==t.hr&&sec==t.sec&&min==t.min)
            cout<<"Time are same"<<endl;
        else
            cout<<"Time are not same"<<endl;
    }
    friend ostream& operator<<(ostream&,time&);
    friend istream& operator>>(istream&,time&);
};
ostream& operator<<(ostream &os,time &t)
{
    os<<"Hours  : "<<t.hr<<endl;
    os<<"Minute : "<<t.min<<endl;
    os<<"Second : "<<t.sec<<endl;
    return os;
}
istream& operator>>(istream &is,time &t)
{
    cout<<"Enter hours  : ";
    is>>t.hr;
    cout<<endl<<"Enter minute : ";
    is>>t.min;
    cout<<endl<<"Enter second : ";
    is>>t.sec;
    return is;
}
int main()
{
    time t1,t2;
    cout<<"Enter first time"<<endl;
    cout<<"----------------------"<<endl;
    cin>>t1;
    cout<<"First time ";
    cout<<t1;
    cout<<"Enter second time"<<endl;
    cout<<"----------------------"<<endl;
    cin>>t2;
    cout<<"Second time"<<endl;
    cout<<t2;
    t1==t2;
    return 0;
}
