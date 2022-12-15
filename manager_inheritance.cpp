#include<iostream>
using namespace std;
class person
{
public:
    char name[30],address[30];
    int phone_no;
};
class employee:public person
{
protected:
    int emno;
public:
   int salary;
};
class manager:public employee
{
protected:
    char designation[40],department[30];
public:
    void accept_details()
    {
        cout<<"Enter details of manager"<<endl;
        cout<<"--------------------------------"<<endl;
        cout<<"Enter Employee no : ";
        cin>>emno;
        cout<<endl<<"Enter name : ";
        cin>>name;
        cout<<endl<<"Enter address : ";
        cin>>address;
        cout<<endl<<"Enter phone no : ";
        cin>>phone_no;
        cout<<endl<<"Enter Designation : ";
        cin>>designation;
        cout<<endl<<"Enter department name : ";
        cin>>department;
        cout<<endl<<"Enter basic salary : ";
        cin>>salary;
    }
};
int main()
{
    manager m[100];
    int n,temp,i;
    cout<<"How many manager details you want to enter"<<endl;
    cin>>n;
    for(int i=0;i<n;i++)
        m[i].accept_details();
    temp=0;
    for(i=1;i<n;i++)
    {
        if(m[temp].salary<m[i].salary)
            temp=i;
    }
    cout<<"manager with highest salary is "<<m[temp].salary<<endl;
    cout<<"manager name "<<m[temp].name;
    return 0;
}
