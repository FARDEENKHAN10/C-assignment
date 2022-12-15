#include<bits/stdc++.h>
using namespace std;
int main()
{
    char user[20];
    cout<<"enter user name "<<endl;
    gets(user);
    int i,numoffset=0,symboloffset=0;
    try
    {
        if(strlen(user)<6)
            throw 'c';
        for(i=0;user[i];i++)
        {
            if(user[i]>='0'&&user[i]<='9')
                numoffset=1;
            if(issymbol(user[i]))
                symboloffset=1;
        }
        if(numoffset==1||symboloffset==1)
            throw 'c';
        cout<<"valid"<<endl;
    }
    catch(char s)
    {
        cout<<"invalid user name"<<endl;
    }
    return 0;
}
