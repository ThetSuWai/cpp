#include<iostream>
using namespace std;

void display(int m[5]);
void display(double (&m)[5]);
void display(float *m);

int main()
{
    int x[5]={10,20,30,40,50};
    double y[5]={12,13,14,15,16};
    float z[5]={1,2,3,4,5};
    display(x);
    display(y);

    display(z);
    return 0;
}

void display(int m[5])
{
    cout<<"Pass by array : ";
    for(int i=0;i<5;i++)
    {
        cout<<m[i]<<" ";
    }
    cout<<endl;
}

void display(double (&m)[5])
{
    cout<<"Pass by reference : ";
    for(int i=0;i<5;i++)
    {
        cout<<m[i]<<" ";
    }
    cout<<endl;
}

void display(float *m)
{

    cout<<"Pass by pointer : ";
    for(int i=0;i<5;i++)
    {
        cout<<m[i]<<" ";
    }
    cout<<endl;
}