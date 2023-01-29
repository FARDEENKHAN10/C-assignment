#include<bits/stdc++.h>
using namespace std;
class node
{
public:
    int value;
    node *pre,*next;
    node()
    {
        value=0;
        next=NULL;
        pre=NULL;
    }
};
class linkedlist
{
    node *head;
public:
    linkedlist()
    {
        head=NULL;
    }
    void insertatend(int v)
    {
        node *t=head;
        node *temp=new node();
        temp->value=v;
        if(head==NULL)
            head=temp;
        else
        {
            while(t->next!=NULL)
                t=t->next;
            t->next=temp;
            temp->pre=t;
        }
    }
    void insertatbegin(int v)
    {
        node *temp=new node();
        temp->value=v;
        if(head==NULL)
            head=temp;
        else
        {
            temp->next=head;
            head->pre=temp;
            head=temp;
        }
    }
    void insertatmiddle(int n,int v)
    {
        if(n==1&&head==NULL)
            insertatbegin(v);
        if(head==NULL&&n>1)
        {
            cout<<"position not exit"<<endl;
            return;
        }
        else
        {
            node *t=head;
            node *temp=new node();
            temp->value=v;
            while(n>2)
            {
                n--;
                if(t->next!=NULL)
                    t=t->next;
                else
                {
                    cout<<"position not exit"<<endl;
                    return;
                }
            }
            temp->next=t->next;
            temp->pre=t;
            if(t->next!=NULL)
                t->next->pre=temp;
            t->next=temp;
        }
    }
    void delete_node(int n)
    {
        node *t=head;
        if(head==NULL)
        {
            cout<<"Linked list is empty"<<endl;
            return;
        }
        else if(n==1)
        {
            node *temp=head;
            head=temp->next;
            head->pre=NULL;
            cout<<temp->value<<" deleted"<<endl;
            delete temp;
            return;
        }
        else
        {
            while(n>1)
            {
                n--;
                if(t->next==NULL)
                {
                    cout<<"position not exit"<<endl;
                    return;
                }
                else
                     t=t->next;
            }
        }
        t->pre->next=t->next;
        if(t->next!=NULL)
            t->next->pre=t->pre;
        cout<<t->value<<" deleted"<<endl;
        delete t;
    }
    void print_dll()
    {
        node *t=head;
        while(t!=NULL)
        {
            cout<<t->value<<" ";
            t=t->next;
        }
        cout<<endl;
    }
    void insert_sort(int v)
    {
        node *t=head;
        node *temp=new node();
        temp->value=v;
        if(head==NULL)
            head=temp;
        else if(head->value>=temp->value)
        {
            temp->next=head;
            head->pre=temp;
            head=temp;
        }
        else
        {
            while(t->next!=NULL&&t->next->value<=temp->value)
                t=t->next;
            temp->next=t->next;
            if(t->next!=NULL)
                t->next->pre=temp;
            temp->pre=t;
            t->next=temp;
        }
    }
    void remove_duplicate()
    {
        node *t=head;
        while(t->next!=NULL)
        {
            if(t->value==t->next->value)
            {
                node *temp=t->next;
                t->next=temp->next;
                if(temp->next!=NULL)
                    temp->next->pre=t;
                delete temp;
            }
            else
                t=t->next;
        }
    }
    void remove_even_node()
    {
        node *t=head;
        while(t->next!=NULL)
        {
            int x=t->value,sum=0;
            while(x!=0)
            {
                sum=sum+x%10;
                x=x/10;
            }
            if(sum%2==0)
            {
                node *temp=t;
                if(t->pre!=NULL)
                    t->pre->next=t->next;
                if(t->next!=NULL)
                    t->next->pre=t->pre;
                if(head==temp)
                {
                    head=t->next;
                    t=head;
                }
                else
                    t=t->next;
                delete temp;
            }
            else
                t=t->next;
        }
    }
};
int main()
{
    int value,n,ch;
    linkedlist l;
    while(1)
    {
        cout<<"1. Insert at begin"<<endl;
        cout<<"2. Insert at end"<<endl;
        cout<<"3. Inset at any position"<<endl;
        cout<<"4. Delete node"<<endl;
        cout<<"5. print linked list"<<endl;
        cout<<"6. Insert element in sorted order"<<endl;
        cout<<"7. Remove duplicate"<<endl;
        cout<<"8. remove even sum node"<<endl;
        cout<<"0. exit"<<endl;
        cout<<"Enter your choice"<<endl;
        cin>>ch;
        switch(ch)
        {
        case 1:
            {
                cout<<"Enter a number"<<endl;
                cin>>value;
                l.insertatbegin(value);
                break;
            }
        case 2:
            {
                cout<<"Enter a number"<<endl;
                cin>>value;
                l.insertatend(value);
                break;
            }
        case 3:
            {
                cout<<"Enter a number and position"<<endl;
                cin>>value>>n;
                l.insertatmiddle(n,value);
                break;
            }
        case 4:
            {
                cout<<"Enter position number"<<endl;
                cin>>n;
                l.delete_node(n);
                break;
            }
        case 5:
            l.print_dll();
            break;
        case 6:
            cout<<"enter a no."<<endl;
            cin>>value;
            l.insert_sort(value);
            break;
        case 7:
            l.remove_duplicate();
            break;
        case 8:
            l.remove_even_node();
            break;
        case 0:
            exit(0);
        default:
            cout<<"invalid choice"<<endl;
        }

    }
    return 0;
}
