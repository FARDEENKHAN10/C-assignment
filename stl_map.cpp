#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<int,string>m;
    m[1]="fardeen";
    m[2]="sahil";
    m[3]="khan";
    m[4]="ali";
    m[6]="ali";
    m[5]="faisal";
    //map<int,string>::iterator i;
    //q3
    for(auto i=m.rbegin();i!=m.rend();i++)
    {
        if(i->first==3&&i->second=="khan")
        {
            m[3]="falana";
        }
        cout<<i->first<<" "<<i->second<<endl;
    }
    //q6
    cout<<"is map empty "<<m.empty()<<endl;
    cout<<"size is "<<m.size()<<endl;
    return 0;
}
