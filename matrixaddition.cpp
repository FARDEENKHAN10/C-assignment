#include<iostream>
using namespace std;
class matrix
{
    int a[3][3];
public:
    matrix()
    {
        cout<<"dc called"<<endl;
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
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                cout<<a[i][j]<<"  ";
            }
            cout<<endl;
        }
    }
    matrix operator+(matrix m)
    {
        cout<<"operator + called"<<endl;
        int i,j;
        matrix temp;
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                temp.a[i][j]=a[i][j]+m.a[i][j];
            }
        }
        return temp;
    }
    matrix(const matrix &m)
    {
        cout<<"copy constructor called"<<endl;
        *this=m;
    }
};
int main()
{
    matrix m1,m2;
   // m1.setmatrix();
    //m2.setmatrix();
    cout<<"first matrix :"<<endl;
    m1.show();
    cout<<"second matrix :"<<endl;
    m2.show();
    matrix m3=m1+m2;
    cout<<"addition of matrix :"<<endl;
    m3.show();
    return 0;
}

