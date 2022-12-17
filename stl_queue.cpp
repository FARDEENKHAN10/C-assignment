#include<bits/stdc++.h>
using namespace std;
int main()
{
    //q1
    queue<int>q1;
    q1.push(3);
    q1.push(4);
    q1.push(1);
    q1.push(2);
    while(!q1.empty())
    {
        cout<<q1.front()<<" ";
        q1.pop();
    }
    cout<<endl;
    //q3
    queue<int>q2;
    q2.push(5);
    q2.push(3);
    q2.push(1);
    cout<<q2.size()<<endl;
    //q7
    queue<int>temp;
    temp=q2;
    while(!temp.empty())
    {
        cout<<temp.front()<<" ";
        temp.pop();
    }
    cout<<endl;
    //q8
    q2.push(23);
    return 0;
}
