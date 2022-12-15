#include<iostream>
using namespace std;
class bill
{
    int reading;
public:
    void get()
    {
        cout<<"enter your reading";
        cin>>reading;
    }
    int calculate()
    {
        if(reading<=100)
            return(reading*1.20);
        else if(reading>100&&reading<=200)
            return((100*1.20)+((reading-100)*2));
        else
            return((100*1.20)+(100*2)+((reading-200)*3));
    }
};
int main()
{
    bill b;
    b.get();
    cout<<b.calculate();
}
