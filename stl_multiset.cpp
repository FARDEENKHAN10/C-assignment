#include<bits/stdc++.h>
using namespace std;
int main()
{
    multiset<int>m;
    //q3
    m.insert(3);
    m.insert(34);
    m.insert(8);
    m.insert(3);
    cout<<"size is "<<m.size()<<endl;
    //q4
    cout<<"max size is "<<m.max_size()<<endl;
    //q7
   // m.erase(m.begin(),m.end());
    //cout<<"size is "<<m.size()<<endl;
    //q8
    m.erase(3);
    for(int i:m)
        cout<<i<<" ";
    cout<<endl;
    return 0;
}
