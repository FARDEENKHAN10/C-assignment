#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<string>str[5];
    string w1,w2;
    int i,j;
    cout<<"enter 5 words";
    for(i=0;i<5;i++)
        cin>>str[i];
    cout<<"enter 2 words to find distance";
    cin>>w1;
    cin>>w2;
    int x=-1,y=-1,ans;
    for(i=0;i<5;i++)
    {
        if(str[i]==w1)
            x=i;
        if(str[i]==w2)
            y=i;
        if(x!=-1&&y!=-1)
            ans=abs(x-y);
    }
    cout<<ans;
    return 0;

}
