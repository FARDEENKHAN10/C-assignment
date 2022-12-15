#include<iostream>
using namespace std;
class student
{
protected:
    int id;
    char name[20];
};
class studentexam:public student
{
protected:
    int marks[6];
};
class studentresult:public studentexam
{
public:
    int percent;
    void accept_details()
    {
        cout<<"\n---------------------------";
        cout<<"\nEnter student roll no. : ";
        cin>>id;
        cout<<"\nEnter student name     : ";
        cin>>name;
        for(int i=0;i<6;i++)
        {
            cout<<"\nEnter marks for subject "<<i+1<<" : ";
            cin>>marks[i];
        }
        cout<<"\n---------------------------";
    }
    void show()
    {
        cout<<"\n*************markshit**********";
        cout<<"\n-------------------------------";
        cout<<"\nName : "<<name;
        cout<<"\nRoll no. : "<<id;
        int sum=0;
        for(int i=0;i<6;i++)
        {
            cout<<"\nMarks of "<<i+1<<" subject "<<marks[i];
            sum=sum+marks[i];
        }
        cout<<"\nTotal percent : "<<sum/6;
    }
};
int main()
{
    studentresult r[10];
    int i,n;
    cout<<"how many student details you want to enter ";
    cin>>n;
    for(i=0;i<n;i++)
       r[i].accept_details();
    for(i=0;i<n;i++)
       r[i].show();
       return 0;
}
