#include<bits/stdc++.h>
#include<string.h>
using namespace std;
class person
{
private:
    int age;
    char name[30];
public:
    void setname(char n[])
    {
        strcpy(name,n);
    }
    void setAge(int x)
    {
        age=x;
    }
    void getname()
    {
        cout<<name<<endl;
    }
    int getage()
    {
        return age;
    }
};
class employee:public person
{
    int empid,salary;
public:
    void setempid(int id)
    {
        empid=id;
    }
    void setsalary(int s)
    {
        salary=s;
    }
    int getsalary()
    {
        return salary;
    }
    int getempid()
    {
        return empid;
    }
    void display()
    {
        cout<<"Employee details are given below"<<endl;
        cout<<endl;
        cout<<"------------------------------------"<<endl;
        cout<<"ID     : "<<empid<<endl;
        cout<<"NAME   : ";
        getname();
        cout<<"AGE    : "<<getage()<<endl;
        cout<<"SALARY : "<<salary<<endl;
    }
};
int main()
{
    employee e;
    e.setname("Fardeen");
    e.setAge(21);
    e.setempid(123);
    e.setsalary(500000);
    e.display();
    return 0;

}
