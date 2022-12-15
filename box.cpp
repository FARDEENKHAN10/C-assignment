#include<iostream>
using namespace std;
class box
{
    int l,b,h;
public:
    box(int le,int br,int hi)
    {
        l=le;
        b=br;
        h=hi;
    }
    int volume()
    {
        return(l*(b+h)+b*(h+l)+h*(b+l));
    }
};
int main()
{
    box b(1,2,3);
    cout<<b.volume();
}
