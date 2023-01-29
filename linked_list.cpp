#include<bits/stdc++.h>
using namespace std;
class node
{
public:
    int value;
    node *next;
    node()
    {
        value=0;
        next=NULL;
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
        node *temp=new node();
        //node *t;
        temp->value=v;
        if(head==NULL)
            head=temp;
        else{
            node *t=head;
            while(t->next!=NULL)
                t=t->next;
            t->next=temp;
        }
    }
    void insertatbegin(int v)
    {
        node *temp=new node();
        temp->value=v;
        if(head==NULL)
            head=temp;
        else{
            temp->next=head;
            head=temp;
        }
    }
    void insertatmiddle(int n,int v)
    {
        node *temp=new node(),*t;
        temp->value=v;
        if(n==1){
            temp->next=head;
            head=temp;
        }
        else
        {
            t=head;
            while(n>1)
            {
                n--;
                if(t->next!=NULL)
                    t=t->next;
                else{
                    cout<<"position not exit"<<endl;
                    return;
                }
            }
            temp->next=t->next;
            t->next=temp;
        }
    }
    void deleteatmiddle(int n)
    {
        node *temp,*t;
        if(n==1)
        {
            temp=head;
            head=temp->next;
            cout<<temp->value<<" deleted"<<endl;
            delete temp;
        }
        else
        {
            temp=head;
            while(n>2)
            {
                n--;
                if(t->next!=NULL)
                    t=t->next;
                else{
                    cout<<"position not exit"<<endl;
                    return;
                }
            }
            temp=t->next;
            t->next=temp->next;
            cout<<temp->value<<" deleted"<<endl;
            delete temp;
        }
    }
    void search(int v)
    {
        node *t=head;
        int count=0;
        if(head==NULL)
            cout<<"linked list is empty"<<endl;
        else
        {
            while(t!=NULL){
            count++;
            if(t->value==v){
                cout<<"element found at "<<count<<endl;
                return;
            }
            t=t->next;
         }
        cout<<"Element found"<<endl;
        }

    }
    bool check_palindrome()
    {
        node *t=head;
        stack<char>s;
        int x;
        while(t!=NULL)
        {
            s.push(t->value);
            t=t->next;
        }
        t=head;
        while(!s.empty())
        {
            x=s.top();
            s.pop();
            if(t->value!=x)
                return false;
            t=t->next;
        }
        return true;
    }
    void move_last_node()
    {
        node *t=head,*temp;
        while(t->next->next!=NULL)
            t=t->next;
        temp=t->next;
        t->next=NULL;
        temp->next=head;
        head=temp;
    }
    int count_key(int key)
    {
        node *t=head;
        int count=0;
        while(t!=NULL)
        {
            if(t->value==key)
                count++;
            t=t->next;
        }
        if(count==0)
        {
            cout<<"Key not present"<<endl;
            return 0;
        }
        return count;
    }
    void remove_duplicate()
    {
        node *t,*temp;
        t=head;
        while(t->next!=NULL)
        {
            if(t->value==t->next->value)
            {
                temp=t->next;
                t->next=temp->next;
                delete temp;
            }
            else
                t=t->next;
        }
    }
    void swap_pairs()
    {
        node *t=head;
        while(t!=NULL&&t->next!=NULL)
        {
            swap(t->value,t->next->value);
            t=t->next->next;
        }
    }
    void printLL()
    {
        node *t=head;
        if(head==NULL){
            cout<<"linked list is empty"<<endl;
            return;
        }
        while(t!=NULL)
        {
            cout<<t->value<<" ";
            t=t->next;
        }
        cout<<endl;
    }
    int middle()
    {
        node *t=head;
        vector<int>v;
        while(t!=NULL)
        {
            v.push_back(t->value);
            t=t->next;
        }
        return v[v.size()/2];
    }
};
int main()
{
    linkedlist l;
    int value;
    int n,ch;
    while(1)
    {
        cout<<"1. Insert at end"<<endl;
        cout<<"2. Insert at begin"<<endl;
        cout<<"3. Insert at middle"<<endl;
        cout<<"4. Delete from any position"<<endl;
        cout<<"5. Search element in linked list"<<endl;
        cout<<"6. Print linked list"<<endl;
        cout<<"7. Remove duplicates"<<endl;
        cout<<"8. Swap node pairs"<<endl;
        cout<<"9. Move last node"<<endl;
        cout<<"10. count key value"<<endl;
        cout<<"11. Check palindrome"<<endl;
        cout<<"12. middle of linked list"<<endl;
        cout<<"0. Exit"<<endl;
        cout<<"Enter your choice"<<endl;
        cin>>ch;
        switch(ch)
        {
        case 1:
            {
                cout<<"Enter a number to be inserted"<<endl;
                cin>>value;
                l.insertatend(value);
                break;
            }
        case 2:
            {
                cout<<"Enter a number to be inserted"<<endl;
                cin>>value;
                l.insertatbegin(value);
                break;
            }
        case 3:
            {
                cout<<"Enter a number to be inserted and position"<<endl;
                cin>>value>>n;
                l.insertatmiddle(n,value);
                break;
            }
        case 4:
            {
                cout<<"Enter position number you want to delete";
                cin>>n;
                l.deleteatmiddle(n);
            }
        case 5:
            {
                cout<<"Enter a number to be search"<<endl;
                cin>>value;
                l.search(value);
                break;
            }
        case 6:
            l.printLL();
            break;
        case 7:
            l.remove_duplicate();
            break;
        case 8:
            l.swap_pairs();
            break;
        case 9:
            l.move_last_node();
            break;
        case 10:
            {
                int x;
                cout<<"enter a number to count"<<endl;
                cin>>x;
                cout<<"Occurrence of key "<<x<<" is "<<l.count_key(x)<<endl;
                break;
            }
        case 11:
            cout<<l.check_palindrome()<<endl;
            break;
        case 12:
            cout<<"Middle of linked list is "<<l.middle()<<endl;
            break;
        case 0:
            exit(0);
        default:
            cout<<"invalid choice"<<endl;
        }
    }
}
