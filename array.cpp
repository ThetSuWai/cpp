#include<iostream>
using namespace std;
int main()
{
    int array[3]={19,22,33};
    cout<<array[1]<<endl;
    cout<<size(array)<<endl;
    for(int i=0;i<size(array);i++)
    {
        cout<<array[i]<<" ";
    }
    cout<<endl;
    for(int n:array)
    {
        cout<<n<<" ";
    }
    cout<<endl;
    int a=12;
    //cout<<size(a)<<endl;
    cout<<sizeof(array);
    cout<<endl;
}