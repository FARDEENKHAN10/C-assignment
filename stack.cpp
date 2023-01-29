#include<bits/stdc++.h>
using namespace std;
class Stack
{
    int s[100],top;
public:
    Stack()
    {
        top=-1;
    }
    ~Stack()
    {
        top=-1;
    }
public:
    int delete_middle()
    {
        if(isempty())
        {
            cout<<"stack underflow"<<endl;
            return -1;
        }
        else{
            int a=top/2,n=top-a;
            int arr[n];
            for(int i=0;i<n;i++)
            {
                arr[i]=s[top];
                top--;
            }
            int x=s[top];
            top--;
            for(int i=n-1;i>=0;i--)
            {
                s[++top]=arr[i];
            }
            return x;
        }
    }
    void push(int value)
    {
        if(isfull())
            cout<<"Stack overflow"<<endl;
        else
        {
            s[++top]=value;
        }
    }
    int pop()
    {
        if(isempty())
        {
            cout<<"stack underflow"<<endl;
            return -1;
        }
        else
        {
            top--;
            return s[top+1];
        }
    }
    int isfull()
    {
        if(top==99)
            return 1;
        else
            return 0;
    }
    int isempty()
    {
        if(top==-1)
            return 1;
        else
            return 0;
    }
    int Top()
    {
        if(isempty())
        {
            cout<<"stack is empty"<<endl;
            return -1;
        }
        else
            return s[top];
    }
};
int main()
{
    Stack s;
    int ch,value;
    while(1)
    {
        cout<<"1. Push"<<endl;
        cout<<"2. pop"<<endl;
        cout<<"3. top"<<endl;
        cout<<"4. Delete middle of stack"<<endl;
        cout<<"5. Exit"<<endl;
        cout<<"Enter your choice"<<endl;
        cin>>ch;
        switch(ch)
        {
        case 1:
            {
                cout<<"Enter a number"<<endl;
                cin>>value;
                s.push(value);
                break;
            }
        case 2:
            cout<<s.pop()<<" Deleted"<<endl;
            break;
        case 3:
            cout<<s.Top()<<endl;
            break;
        case 4:
            cout<<s.delete_middle()<<" deleted"<<endl;
        case 5:
            exit(0);
        default:
            cout<<"invalid choice"<<endl;
        }
    }
}
