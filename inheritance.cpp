#include<iostream>
using namespace std;
class a
{
private:
    void fun1()
    {
        cout<<"fun1() of private"<<endl;
    }
protected:
    void fun2()
    {
        cout<<"fun2() of protected"<<endl;
    }
public:
    void fun3()
    {
        cout<<"fun3() of public"<<endl;
    }
};
class b:private a
{
public:
    void checkpublic()
    {
        //fun1();
        fun2();
        fun3();
    }
};
int main()
{
    b obj;
    //obj.fun1();
    //obj.fun2();
   // obj.fun3();
    obj.checkpublic();
}
