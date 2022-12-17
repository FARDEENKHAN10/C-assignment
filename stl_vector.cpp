#include<bits/stdc++.h>
#include<vector>
using namespace std;
void vector_input()
{
    vector<int>v;
    int i,a;
    cout<<"enter value in array"<<endl;
    for(i=0;i<5;i++)
    {
        cin>>a;
        v.push_back(a);
    }
    for(i=0;i<v.size();i++)
        cout<<v[i]<<" ";
    cout<<endl;
}
int main()
{
    int i;
    //q1
    vector<int>v={2,34,1,5,6};
    for(i=0;i<v.size();i++)
        cout<<v[i]<<" ";
    cout<<endl;
    //q2
    vector<int>x;
    x.push_back(39);
    x.push_back(34);
    x.push_back(45);
    for(i=0;i<x.size();i++)
        cout<<x[i]<<" ";
    cout<<endl;
    //q3
    //vector_input();
    //q4
    vector<int>y;
    y=x;
    for(i=0;i<y.size();i++)
        cout<<y[i]<<" ";
    cout<<endl;
    //q5
    cout<<"max="<<*max_element(x.begin(),x.end())<<endl;
    cout<<"min="<<*min_element(x.begin(),x.end())<<endl;
    //q6
    for(i=v.size()-1;i>=0;i--)
        cout<<v[i]<<" ";
    cout<<endl;
    //q7
    int sum=0;
    for(i=0;i<x.size();i++)
        sum=sum+x[i];
    cout<<sum<<endl;
    //q8
    vector<int>v1{1,2,3,4};
    vector<int>v2{2,6,4,7,9,8};
    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());
    vector<int>v3(v1.size()+v2.size());
    vector<int>::iterator it,ed;
    ed=set_intersection(v1.begin(),v1.end(),v2.begin(),v2.end(),v3.begin());
    cout<<"common ";
    for(it=v3.begin();it!=ed;it++)
        cout<<*it<<" ";
    cout<<endl;
    //q9
    vector<float>f;
    f.push_back(3.4);
    f.push_back(1.4);
    cout<<f.at(0)<<endl;
    cout<<f.at(1)<<endl;
    //q10
    for(i=0;i<v.size();i++)
    {
        if(v[i]==5){
            cout<<"element found"<<endl;
            break;
        }
    }
    return 0;
}
