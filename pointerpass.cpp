#include<iostream>
using namespace std;
void printarray(int *a)
{
    cout<<sizeof(a)<<endl;
    cout<<a<<endl;
    // for(int i:a)
    // {
    //     cout<<i;
    // }
    
}
int main()
{
    int a[5]={1,2,3,4,5};
    cout<<sizeof(a)<<endl;
    cout<<&a<<endl;
    printarray(a);
    return 0;
}