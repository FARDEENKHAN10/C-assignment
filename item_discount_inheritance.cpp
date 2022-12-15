#include<iostream>
using namespace std;
class item
{
public:
    int itemno,price;
    char name[30];
};
class discount:public item
{
public:
    int discount;
    void accept_dtails()
    {
        cout<<"\n Enter item name : ";
        cin>>name;
        cout<<"\n Enter item number : ";
        cin>>itemno;
        cout<<"\n Enter item price : ";
        cin>>price;
        cout<<"\n Enter Discount parcent : ";
        cin>>discount;
        cout<<"\n--------------------------";
    }
    void display()
    {
        cout<<"\n Item name : "<<name;
        cout<<"\n Item no. :"<<itemno;
        cout<<"\n Item price : "<<price;
        cout<<"\n Discount percent : "<<discount;
        cout<<"\n Discount price : "<<(price/100)*discount;
        cout<<"\n -------------------------";
    }
};
int main()
{
    discount d[10];
    int i,n,total=0,percent=0;
    cout<<"how many item you want to enter? : "<<endl;
    cin>>n;
    for(i=0;i<n;i++)
        d[i].accept_dtails();
    for(i=0;i<n;i++){
        d[i].display();
        total=d[i].price+total;
        percent=percent+d[i].discount;
    }
    cout<<"\nTotal price : "<<total;
    cout<<"\nTotal discount : "<<(total/100)*percent/2;
    return 0;
}
