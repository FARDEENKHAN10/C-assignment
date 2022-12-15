#include<iostream>
using namespace std;
class factorial
{
    int n;
public:
    void set(int x)
    {
        n=x;
    }
    int factorial1()
    {
        int i,sum=1;
        for(i=n;i>0;i--)
            sum=sum*i;
        return sum;
    }
};
int main()
{
    factorial f;
    f.set(5);
    cout<<"factorial is "<<f.factorial1();
    return 0;
}
