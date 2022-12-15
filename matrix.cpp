#include<iostream>
using namespace std;
class matrix
{
    int a[3][3];
public:
    matrix()
    {
        int i,j;
        cout<<"Enter matrix element (3 X 3) :"<<endl;
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++){
                cin>>a[i][j];
            }
        }
    }
    void show()
    {
        int i,j;
        cout<<"Matrix is :"<<endl;
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                cout<<a[i][j]<<"  ";
            }
            cout<<endl;
        }
    }
    void operator-()
    {
        int i,j;
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                a[i][j]=-a[i][j];
            }
        }
    }
};
int main()
{
    matrix m;
    m.show();
    -m;
    m.show();
    return 0;
}
