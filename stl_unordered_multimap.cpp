#include<bits/stdc++.h>
using namespace std;
int main()
{
    //q1
    unordered_multimap<int,int>m,m1;
    m.insert({1,10});
    m.insert({2,20});
    m.insert({1,10});
    m.insert({3,30});
    //for(auto i:m)
      //  cout<<i.first<<"->"<<i.second<<endl;
    //q2
   /* for(auto i:m)
        m1.insert({i.first,i.second});
    for(auto i:m1)
        cout<<i.first<<"->"<<i.second<<endl;*/
    //q5
    int a[]={3,1,2,3},count=0,i=0,j=1,x=4,y=2,k=14;
    for(int i=0;i<3;i++)
    {
        for(int j=i+1;j<4;j++)
            m1.insert({a[i],a[j]});
    }
    for(auto it:m1)
    {
        if((it.first*x+it.second*y)==k)
            count++;
    }
    cout<<"total pair is "<<count;

    return 0;
}
