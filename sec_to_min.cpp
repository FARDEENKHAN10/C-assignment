#include<iostream>
using namespace std;
class time
{
    int m;
public:
    void show()
    {
        cout<<"min="<<m<<endl;
    }
    time(int sec)
    {
        m=sec/60;
    }
};
int main()
{
    int duration;
    cout<<"enter time duration in second"<<endl;
    cin>>duration;
    time t1=duration;
    t1.show();
    return 0;
}
