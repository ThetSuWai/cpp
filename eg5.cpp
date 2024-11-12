#include<iostream>
using namespace std;
int main()
{
    int x=20;
    int *y=&x;
    int **z=&y;
    cout<<"address of y is : "<<&y<<endl;
    cout<<"address of x is : "<<&x<<endl;
    cout<<"address of y is : "<<&z<<endl;
    cout<<"address of x is : "<<z<<endl;
    cout<<"value os y is :"<<*z<<endl;
}