#include<bits/stdc++.h>
using namespace std;
int main()
{
    //q3
    list<int>l;
    l.push_back(8);
    l.push_back(78);
    l.push_back(23);
    l.push_front(34);
    for(int i:l){
        cout<<i<<" ";
    }
    cout<<endl;
    //q4
    l.reverse();
    for(int i:l){
        cout<<i<<" ";
    }
    cout<<endl;
    //q5
 /*   list<int>l2;
    int a;
    cout<<"enter a number"<<endl;
    for(int i=0;i<4;i++)
    {
        cin>>a;
        l2.push_back(a);
    }
    for(int i:l2){
        cout<<i<<" ";
    }
    cout<<endl;
    //q6
//    cout<<"first element="<<l2.front()<<"second element="<<l2.back()<<endl;
    //q7
    l.push_back(13);
    l.push_front(100);
    for(int i:l){
        cout<<i<<" ";
    }
    cout<<endl;
    //q8
    l.remove(100);*/
    //q9
    l.unique();

    //q10
    l.merge(l2);
    for(int i:l){
        cout<<i<<" ";
    }
    cout<<endl;
    //q11
    list<int>l3(l);
    for(int i:l3){
        cout<<i<<" ";
    }
    cout<<endl;
    //q12
    array<int,4>s={1,2,3,4};
    list<int>l4;
    for(int i=0;i<4;i++)
        l4.push_back(s[i]);
    for(int i:l4){
        cout<<i<<" ";
    }
    cout<<endl;
    //q13
    list<char>ch;
    ch.push_back('c');
    ch.push_back('d');
    ch.push_back('e');
    ch.push_back('f');
    for(char i:ch)
        cout<<i<<" ";
    cout<<endl;
    //q14
    list<char>::const_iterator it;
    for(it=ch.begin();it!=ch.end();it++)
        cout<<*it<<" ";
    cout<<endl;

    return 0;

}
