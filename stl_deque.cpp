#include<bits/stdc++.h>
using namespace std;
int main()
{
    //q1
    deque<int>d;
    d.push_back(4);
    d.push_back(5);
    d.push_back(6);
    deque<int>::iterator x=d.begin();
    ++x;
    x=d.insert(x,10);
    //q5
    cout<<d.max_size()<<endl;
    //q6
    deque<int>d1;
    d1.assign(d.begin(),d.end());
    for(int i:d1)
        cout<<i<<" ";
    cout<<endl;
    //q7
    cout<<"first-> "<<d1.front()<<endl;
    cout<<"second-> "<<d1.back()<<endl;
    //q8
    d1.erase(d1.begin(),d1.begin()+2);
    for(int i:d1)
        cout<<i<<endl;
    //q9
    deque<int>q={1,2,3,4,5,6};
    vector<int>v;
    int k=3,front=1;
    for(int i=1;i<=6;i++)
    {
        if(front==1)
        {
            v.push_back(q.front());
            q.pop_front();
            if(k>1)
                front=0;
            k--
        }
        else
        {
            v.push_back(q.back());
            q.pop();
            if(k>1)
                front=1;
            k--;
        }
    }
    //q12
    deque<char>ch={'d','#','c','l','#','a','#'},ch1;
    deque<char>::iterator it;
    for(it=ch.begin();it!=ch.end();it++)
    {
        if(*it!='#')
            ch1.push_back(*it);
    }
    for(char i:ch1)
        cout<<i;


}
