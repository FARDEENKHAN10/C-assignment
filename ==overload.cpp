#include<iostream>
using namespace std;
class person
{
    int age,rank;
public:
    person(int a,int r)
    {
        age=a;
        rank=r;
    }
    person()
    {}
    int operator==(person p)
    {
        if(age==p.age&&rank==p.rank)
            return 1;
        else
            return 0;
    }
};
int main()
{
    person p1(20,2),p2(20,2);
    p1==p2;
    return 0;
}
