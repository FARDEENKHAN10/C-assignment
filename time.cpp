#include<iostream>
using namespace std;
class time
{
private:
    int hr,min,sec;
public:
    void settime(int x,int y,int z)
    {
        hr=x; min=y; sec=z;
    }
    void show()
    {
        cout<<hr<<"hr "<<min<<"min "<<sec<<"sec";
    }
};
int main()
{
    time t;
    t.settime(3,40,58);
    t.show();
    return 0;
}
