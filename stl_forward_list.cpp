#include<bits/stdc++.h>
using namespace std;
int main()
{
    //q1
    forward_list<int>li;
    li.assign({1,4,3,4,5});
    for(int i:li)
        cout<<i<<" ";
    cout<<endl;
    //q2
    forward_list<int>li2={11,12,13,14};
    for(int i:li2)
        cout<<i<<" ";
    cout<<endl;
    //q3
    forward_list<int>li3={1,2,3,4,5,6,7,8,9,10};
    int sum=0;
    for(int i:li3)
    {
        sum=sum+i;
    }
    cout<<"sum of list3 is "<<sum<<endl;
    //q4
    li3.reverse();
    cout<<"list 3 after reverse"<<endl;
    for(int i:li3)
        cout<<i<<" ";
    cout<<endl;
    //q5
    li3.unique();
    //q6
    li.merge(li2);
    for(int i:li)
        cout<<i<<" ";
    cout<<endl;
    //q7
    forward_list<int>li4={3,2,9};
    forward_list<int>li5={8,1,2};
    li4.sort();
    li5.sort();
    //li4.merge(li5);
    //for(int i:li4)
      //  cout<<i<<" ";
    //cout<<endl;
    //q8
    li4.swap(li5);
    cout<<"list4 no. after swap"<<endl;
    for(int i:li4)
        cout<<i<<" ";
    cout<<endl;
        cout<<"list5 no. after swap"<<endl;
    for(int i:li5)
        cout<<i<<" ";
    cout<<endl;
    //q9
    li5.splice_after(li5.begin(),li4,li4.before_begin(),li4.end());
    //q10
    list<int>li6;
    li6.assign(li4.begin(),li4.end());
    for(int i:li6)
        cout<<i<<" ";
    cout<<endl;
    return 0;
}
