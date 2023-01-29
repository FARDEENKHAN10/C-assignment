#include<bits/stdc++.h>
using namespace std;
int max_count(string str[],int n,int m)
{
    unordered_set<int>ind;
    for(int j=0;j<m;j++)
    {
        int mx=0;
        for(int i=0;i<n;i++)
        {
            mx=max(mx,(int)str[i][j]-'0');
        }
        for(int i=0;i<n;i++)
        {
            if(str[i][j]-'0'==mx)
                ind.insert(i);
        }
    }
    return ind.size();
}
vector<int> minmaxnumber(int a[][3])
{
    unordered_set<int>s;
    int x;
    for(int i=0;i<3;i++)
    {
        x=a[i][0];
        for(int j=1;j<3;j++)
        {
            if(x>a[i][j])
              x=a[i][j];
        }
        s.insert(x);
    }
    vector<int>ans;
    for(int i=0;i<3;i++)
    {
        int maxc=INT_MIN;
        for(int j=0;j<3;j++)
        {
            maxc=max(maxc,a[j][i]);
        }
        if(s.find(maxc)!=s.end())
            ans.push_back(maxc);
    }
    return ans;
}
void maxmizearray(int a[],int b[],int n)
{
    int c[2*n],k=0;
    unordered_set<int>s;
    for(int i=0;i<n;i++)
    {
        c[k++]=a[i];
    }
    for(int i=0;i<n;i++)
    {
        c[k++]=b[i];
    }
    sort(c,c+k);
    while(s.size()!=n)
    {
        if(s.find(c[--k])==s.end())
        {
            s.insert(c[k]);
        }
    }
    k=0;
    for(int i=0;i<n;i++)
    {
        if(s.find(b[i])!=s.end())
        {
            c[k++]=b[i];
            s.erase(b[i]);
        }
    }
    for(int i=0;i<n;i++)
    {
        if(s.find(a[i])!=s.end())
        {
            c[k++]=a[i];
            s.erase(a[i]);
        }
    }
    for(int i=0;i<n;i++)
        a[i]=c[i];
}
void printarray(int a[],int n)
{
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
}
bool sum(int a[],int n)
{
    unordered_set<int>s;
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum=sum+a[i];
        if(s.find(sum)!=s.end())
            return true;
        s.insert(sum);
    }
    return false;
}
int main()
{
    //q2
    unordered_set<int>s;
    int a[]={2,6,9,12,17,22,31,32,35,42},n=10;
    for(int i=0;i<10;i++)
        s.insert(a[i]);
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            int x=a[j]-a[i];
            int y=a[j]+x;
            if(s.find(y)!=s.end())
                cout<<a[i]<<" "<<a[j]<<" "<<y<<endl;
        }
    }
    //q3
    int b[]={1,3,5,10,14,15},m=6,xor1,coun=0;
    unordered_set<int>s;
    for(int i=0;i<m;i++)
        s.insert(b[i]);
    cout<<"triplets of xor is"<<endl;
    for(int i=0;i<m-1;i++)
    {
        for(int j=i+1;j<m;j++){
            xor1=b[i]^b[j];
            if(s.find(xor1)!=s.end()&&xor1!=b[i]&&xor1!=b[j])
               coun++;
        }
    }
    cout<<coun/3;
    //q4
    int a[]={7,4,8,0,1};
    int b[]={9,7,2,3,6};
    int size=sizeof(a)/sizeof(a[0]);
    maxmizearray(a,b,size);
    printarray(a,size);
    //q5
    int a[]={4,2,-4,1,6};
    int size=sizeof(a)/sizeof(a[0]);
    cout<<sum(a,size);
    //q8
    int mat[][3]={{1,10,4},{9,3,8},{15,16,17}};
    vector<int>a=minmaxnumber(mat);
    for(auto i:a)
        cout<<i<<" ";
    //q9
    string s[]={"123","324","493"};
    int n=sizeof(s)/sizeof(s[0]);
    int m=s[0].length();
    cout<<max_count(s,n,m);
    //q10
     unordered_set<int>s1,s2;
    s1.insert(2);
    s2.insert(3);
    if(s1==s2)
        cout<<"true";
    else
        cout<<"false";
    return 0;
}
