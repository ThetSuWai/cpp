#include<iostream>
using namespace std;
void findSize(int m[5])
{
    cout<<sizeof (m[3])<<endl;
    cout<<&m<<endl;
    cout<<m<<endl;
}

int main()
{
    int a[5]={1,2,3,4,5};
    cout<<sizeof(a)<<endl;
    cout<<&a<<endl;
    cout<<&a[1]<<endl;
    findSize(a);
    return 0;
}