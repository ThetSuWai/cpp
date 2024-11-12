#include<iostream>
using namespace std;
int main()
{
    int high=0,space=0;
    cout<<"Enter size of pattern: ";
    cin>>high;
    space=high-1;
    for(int i=0;i<high;i++)
    {
        for(int j=0;j<space;j++)
        {
            cout<<" ";
        }
        for(int star=0;star<=(i*2);star++)
        {
            cout<<"*";
        }
        cout<<endl;
        space--;
    }
    return 0;
}