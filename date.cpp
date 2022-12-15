#include<iostream>
using namespace std;
class date
{
    int day,month,year;
public:
    date(int x,int y,int z)
    {
        day=x;
        month=y;
        year=z;
    }
    void display()
    {
        cout<<day<<"/"<<month<<"/"<<year;
    }
};
int main()
{
    date d(03,12,2022);
    d.display();
}
