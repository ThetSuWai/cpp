#include<iostream>
using namespace std;

int main()
{
    int a=5;
    int &b=a;
    cout<<" a is "<<a<<"b is "<<b;
    b=10;
    cout<<" a is "<<a<<"b is "<<b;
    int *x=&a;
    x=20;
    cout<<"a : "<<a;
}