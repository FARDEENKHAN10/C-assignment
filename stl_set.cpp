#include<bits/stdc++.h>
using namespace std;
void search1(set<int>&s,int x)
{
    for(int i:s)
    {
        if(i==x)
            cout<<"element found";
    }
}

int main()
{
    //q1
    set<int>s1;
    s1.insert(7);
    s1.insert(5);
    s1.insert(12);
    s1.insert(3);
    s1.insert(5);
    cout<<s1.size()<<endl;
    //q3
    s1.erase(12);
    for(int i:s1)
        cout<<i<<" ";
    cout<<endl;
    //q4
    cout<<"stack is empty "<<s1.empty()<<endl;
    //q6
//    int x=s1.lower_bound(3);
  //  cout<<"lower bound of key 3 is "<<x;
    int a;
    cout<<"enter a number you want to find"<<endl;
    cin>>a;
    search1(s1,a);
    return 0;
}
