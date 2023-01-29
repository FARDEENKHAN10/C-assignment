#include<bits/stdc++.h>
using namespace std;
int main()
{
    //q1
    multimap<int,int>m1;
    m1.insert(pair<int,int>(1,23));
    m1.insert(pair<int,int>(2,12));
    m1.insert(pair<int,int>(1,34));
    m1.insert(pair<int,int>(8,24));
    m1.insert(pair<int,int>(5,26));
    for(auto i:m1)
        cout<<i.first<<" "<<i.second<<endl;
    //q3
    multimap<int,int>m2;
    m2.insert(pair<int,int>(1,230));
    m2.insert(pair<int,int>(2,78));
    m2.insert(pair<int,int>(3,90));
    m1.swap(m2);
    cout<<"value after swap"<<endl;
    for(auto i:m1)
        cout<<i.first<<" "<<i.second<<endl;
    //q4
   // m2.erase(m2.begin(),m2.end());
    //cout<<m2.empty()<<endl;
    //m2.erase(2);
    //cout<<"value after delete"<<endl;
    for(auto i:m2)
        cout<<i.first<<" "<<i.second<<endl;
        //q7
    auto it=m2.lower_bound(3);
    cout<<"lower bound is"<<endl;
    cout<<it->first<<" "<<it->second<<endl;
    //q8
    auto it1=m2.upper_bound(3);
    cout<<"upper bound is"<<endl;
    cout<<it1->first<<" "<<it1->second<<endl;
    int a[]={2,3,14,5};
    multimap<int,int>m3;
    for(int i=0;i<4;i++)
        m3.insert({a[i],i});
    cout<<"array element is"<<endl;
    for(auto i:m3)
        cout<<i.first<<" "<<i.second<<endl;
    return 0;
}
