#include<bits/stdc++.h>
using namespace std;
class student
{
    int roll;
    char name[20],address[20];
public:
    student(int x,char n[],char a[])
    {
        roll=x;
        strcpy(name,n);
        strcpy(address,a);
    }
    void show()
    {
        cout<<"student name is "<<name<<endl;
        cout<<"student address is "<<address<<endl;
        cout<<"student roll no. is "<<roll;
    }
};
int main()
{
    student s(34,"fardeen","jhunjhunu");
    s.show();
    return 0;
}
