#include<bits/stdc++.h>
using namespace std;
class student
{
private:
    int roll,year;
    char name[20],branch[30];
public:
    student()
    {
        cout<<"enter your roll no.,year,name,branch"<<endl;
        cin>>roll;
        cin>>year;
        cin>>name;
        cin>>branch;
    }
    void display()
    {
        cout<<"Student Name : "<<name<<endl;
        cout<<"Student roll number is :"<<roll<<endl;
        cout<<"Student class year is :"<<year<<endl;
        cout<<"student branch is : "<<branch;
    }
};
int main()
{
    student s;
    s.display();
}
