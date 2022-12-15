#include<iostream>
using namespace std;
class fraction
{
    int n,d;
public:
    fraction()
    {
        n=0; d=0;
    }
    fraction operator++()
    {
        fraction f;
       f.n=++n;
       f.d=++d;
       return f;
    }
    fraction operator++(int)
    {
        fraction f;
       f.n=n++;
       f.d=d++;
       return f;
    }
    friend ostream& operator<<(ostream&,fraction&);
    friend istream& operator>>(istream&,fraction&);
};
ostream& operator<<(ostream &os,fraction &f)
{
    os<<f.n<<"/"<<f.d<<endl;
    return os;
}
istream& operator>>(istream &is,fraction &f)
{
    cout<<"numerator   : ";
    is>>f.n;
    cout<<endl<<"denominator : ";
    is>>f.d;
    return is;
}
int main()
{
    fraction f1,f2;
    cout<<"f1 : ";
    cout<<f1;
    cout<<"f2 : ";
    cout<<f2;
    cout<<"Enter 1st fraction value"<<endl;
    cin>>f1;
    cout<<"f1++ : ";
    f1++;
    cout<<f1;
    ++f1;
    cout<<"f1++ : ";
    cout<<f1;
    cout<<"Enter second fraction value"<<endl;
    cin>>f2;
    f2=++f1;
    cout<<"f2=++f1"<<endl;
    cout<<"f1 : ";
    cout<<f1;
    cout<<"f2 : ";
    cout<<f2;
    f2=f1++;
    cout<<"f1=f1++"<<endl;
    cout<<"f1 : ";
    cout<<f1;
    cout<<"f2 : ";
    cout<<f2;
    return 0;
}
