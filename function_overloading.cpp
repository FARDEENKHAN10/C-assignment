#include<iostream>
using namespace std;
class addition
{
  public:
      float add(int x,int y,int z=0)
      {
          return(x+y+z);
      }
      double add(double x,double y,double z=0)
      {
          return(x+y+z);
      }

};
int main()
{
    addition a;
    cout<<a.add(3.4,0.3);
    cout<<a.add(3,4,6);
}
