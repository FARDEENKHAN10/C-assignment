#include<iostream>
using namespace std;
class costumer
{
protected:
    char name[30];
    long long int phone_no;
};
class depositer:public costumer
{
protected:
    long long int account_no,balance;
} ;
class borrower:public depositer
{
public:
    long long int loan_no,loan_amt;
    void accept_details()
    {
        cout<<"\nEnter customer name     : ";
        cin>>name;
        cout<<"\nEnter customer phone no : ";
        cin>>phone_no;
        cout<<"\nEnter customer A/c no.  : ";
        cin>>account_no;
        cout<<"\nEnter balance           : ";
        cin>>balance;
        cout<<"\nEnter loan no.          : ";
        cin>>loan_no;
        cout<<"\nEnter loan amount       : ";
        cin>>loan_amt;
        cout<<"\n-----------------------------";
    }
    void show_details()
    {
        cout<<"\nDetails of customer";
        cout<<"\n----------------------------";
        cout<<"\nCustomer name     : "<<name;
        cout<<"\nCustomer phone no : "<<phone_no;
        cout<<"\nCustomer A/c no.  : "<<account_no;
        cout<<"\nBalance           : "<<balance;
        cout<<"\n----------------------------";
        cout<<"\nLoan no           : "<<loan_no;
        cout<<"\nLoan amount       : "<<loan_amt;
        cout<<"\n----------------------------";
    }
};
int main()
{
    borrower b[100];
    int n,i;
    cout<<"how many costomer details you want to enter";
    cin>>n;
    for(i=0;i<n;i++)
        b[i].accept_details();
    for(i=0;i<n;i++)
        b[i].show_details();
    return 0;

}
