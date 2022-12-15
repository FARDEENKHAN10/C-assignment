#include<bits/stdc++.h>
#include<fstream>
#include<string>
using namespace std;
int main()
{
    ofstream fout;
    string line;
    fout.open("C:/Users/muham/Desktop/New folder/abc.txt");
    if(!fout)
    {
        cout<<"file not create";
    }
    else
    {
        cout<<"enter data in file"<<endl;
        while(fout)
        {
            getline(cin,line);
            if(line=="1")
                break;
            fout<<line;
        }
        cout<<"file created successfully "<<endl;
    }
    fout.close();
    ifstream fin;
    fin.open("C:/Users/muham/Desktop/New folder/abc.txt");
    int i=0;
    while(!fin.eof())
    {
        getline(fin,line);
        cout<<line<<endl;
    }
    while(!fin.eof())
        i++;
    cout<<i;
    fin.close();
    return 0;
}
