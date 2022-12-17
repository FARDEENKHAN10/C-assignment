#include<bits/stdc++.h>
using namespace std;
int main()
{
    //q1
    stack<int>s;
    s.push(7);
    s.push(4);
    s.push(2);
    s.push(1);
    s.push(9);
    int x=s.size();
    for(int i=0;i<x;i++)
    {
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;
    stack<string>str;
    str.push("I");
    str.push("love");
    str.push("to");
    str.push("code");
    while(!str.empty())
    {
        cout<<str.top()<<" ";
        str.pop();
    }
    cout<<endl;
    //q5
    stack<int>s1;
    s1.push(7);
    s1.push(4);
    s1.push(2);
    s1.push(1);
    s1.push(9);
   /* stack<int>s2;
    s2=s1;
    for(int i=0;i<x;i++)
    {
        cout<<s2.top()<<" ";
        s2.pop();
    }*/
    //q7

    return 0;
}
