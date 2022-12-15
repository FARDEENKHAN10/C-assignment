#include<bits/stdc++.h>
using namespace std;
class mystring
{
   char str[100];
   public:
       mystring()
       {
           cout<<"enter a string"<<endl;
           fgets(str,100,stdin);
       }
       void operator!()
       {
           int i;
           for(i=0;str[i];i++)
           {
               if(str[i]>='a'&&str[i]<='z')
                str[i]=str[i]-32;
               else if(str[i]>='A'&&str[i]<='Z')
                str[i]=str[i]+32;
                else
                    str[i]=str[i];
           }
       }
       void show()
       {
           cout<<str;
       }
};
int main()
{
    mystring s;
    !s;
    s.show();
    return 0;
}
