#include<bits/stdc++.h>
using namespace std;
int main()
{
    //q1
    priority_queue<int>pq1;
    pq1.push(38);
    pq1.push(23);
    pq1.push(40);
    pq1.push(39);
    pq1.push(1);
    while(!pq1.empty())
    {
        cout<<pq1.top()<<" ";
        pq1.pop();
    }
    cout<<endl;
    //q3
    priority_queue<int,vector<int>,greater<int>>q;
    q.push(4);
    q.push(37);
    q.push(1);
    q.push(2);
    cout<<"min priority queue ";
    while(!q.empty())
    {
        cout<<q.top()<<" ";
        q.pop();
    }
    cout<<endl;
    priority_queue<int>pq2;
    pq2.push(8);
    pq2.push(3);
    pq2.push(4);
    priority_queue<int>pq3;
    pq3.push(87);
    pq3.push(23);
    pq2.swap(pq3);
    while(!pq2.empty())
    {
        cout<<pq2.top()<<" ";
        pq2.pop();
    }
    cout<<endl;
    while(!pq3.empty())
    {
        cout<<pq3.top()<<" ";
        pq3.pop();
    }
    cout<<endl;
    //q7
    int a[3]={1,4,5};
    int b[4]={3,6,7,8};
    priority_queue<int,vector<int>,greater<int>>q2;
    for(int i=0;i<7;i++)
    {
        if(i<3)
             q2.push(a[i]);
        else
            q2.push(b[i-3]);
    }
    while(!q2.empty())
    {
        cout<<q2.top()<<" ";
        q2.pop();
    }
    //q8
    array<int,6>arr={2,4,1,4,9,8};

}
