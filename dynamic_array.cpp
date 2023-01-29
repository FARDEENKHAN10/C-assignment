#include<bits/stdc++.h>
using namespace std;
class Dynamicarray
{
    int *arr;
    int size,count;
public:
    Dynamicarray()
    {
        arr=new int[1];
        size=0;
        count=1;
    }
    ~Dynamicarray()
    {
        delete []arr;
        size=0;
        count=0;
    }
    void insert(int a)
    {
        if(size==count)
            resize_array();
        size++;
        arr[size-1]=a;
    }
    void insertat(int index,int value)
    {
        resize_array();
        if(index>count)
        {
            cout<<"index not parsent"<<endl;
            return;
        }
        for(int i=size;i>=index;i--)
            arr[i]=arr[i-1];
        arr[index]=value;
        size++;
    }
    void resize_array()
    {
        int *temp=new int[size*2];
        for(int i=0;i<size;i++)
            temp[i]=arr[i];
        delete []arr;
        arr=temp;
        count=2*size;
    }
    int get(int index)
    {
        if(index>=size)
        {
            cout<<"index is not present"<<endl;
            return 0;
        }
        return arr[index];
    }
    void print_array()
    {
        for(int i=0;i<size;i++)
            cout<<arr[i]<<" ";
        cout<<endl;
    }
    int get_count()
    {
        return count;
    }
    int get_size()
    {
        return size;
    }
    void search_element(int a)
    {
        for(int i=0;i<size;i++)
        {
            if(arr[i]==a){
                cout<<"element found"<<endl;
                return;
            }
        }
        cout<<"element not found"<<endl;
    }
    void reverse_array()
    {
        if(size==0)
        {
            cout<<"array is empty"<<endl;
            return;
        }
        for(int i=size-1;i>=0;i--)
            cout<<arr[i]<<" ";
        cout<<endl;
    }
    void sort_array()
    {
        int temp;
        if(size<=1){
            cout<<"array is empty or having one element"<<endl;
            return;
        }
        for(int i=0;i<size-1;i++)
        {
            for(int j=i+1;j<size;j++)
            {
                if(arr[i]>arr[j])
                {
                    temp=arr[i];
                    arr[i]=arr[j];
                    arr[j]=temp;
                }
            }
        }
    }

};
int main()
{
    Dynamicarray a;
    int ch,value,index;
    while(1)
    {
        cout<<"1. Insert a element in array"<<endl;
        cout<<"2. Insert at any position"<<endl;
        cout<<"3. Search index number"<<endl;
        cout<<"4. Search value in array"<<endl;
        cout<<"5. Get array size"<<endl;
        cout<<"6. Get array capacity"<<endl;
        cout<<"7. Print array"<<endl;
        cout<<"8. Reverse array"<<endl;
        cout<<"9. Sort array"<<endl;
        cout<<"10. Exit"<<endl;
        cout<<"Enter your choice"<<endl;
        cin>>ch;
        switch(ch)
        {
        case 1:
            {
                cout<<"Enter a number"<<endl;
                cin>>value;
                a.insert(value);
                break;
            }
        case 2:
            {
                cout<<"Enter position number and value"<<endl;
                cin>>index>>value;
                a.insertat(index,value);
                break;
            }
        case 3:
            {
                cout<<"Enter index number"<<endl;
                cout<<a.get(index);
                break;
            }
        case 4:
            {
                cout<<"Enter value to be search"<<endl;
                cin>>value;
                a.search_element(value);
            }
        case 5:
            cout<<a.get_size();
            break;
        case 6:
            cout<<a.get_count();
            break;
        case 7:
            a.print_array();
            break;
        case 8:
            a.reverse_array();
            break;
        case 9:
            a.sort_array();
            break;
        case 10:
            exit(0);
        default:
            cout<<"Invalid choice"<<endl;
        }
    }
}
