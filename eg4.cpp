#include<iostream>
using namespace std;

int add(int *x,int *y)
{
    return *x+(*y);

}

int sub(int &x,int &y)
{
    cout<<"First number is : "<<&x<<endl;
    cout<<"value of first: "<<x;
    return x-y;
}

int multiplication(int x=5,int y=0)
{
    return x*y;
}

int division(int *x,int *y)
{
    return *x/(*y);
}
int modulo(int x,int y)
{
    return x%y;
}
int main()
{
    int first=0,second=0,result=0;
    cout<<"Enter first number: ";
    cin>>first;
    cout<<"Enter second number: ";
    cin>>second;

    result=add(&first,&second);
    cout<<"Addition : "<<result<<endl;

    cout<<"First number address is : "<<&first<<endl;

    result=sub(first,second);
    cout<<"First number is : "<<first<<endl;
    cout<<"Subtraction : "<<result<<endl;

    result=multiplication(first,second);
    cout<<"Multiplication : "<<result<<endl;

    result=division(&first,&second);
    cout<<"Division : "<<result<<endl;
    
    result=modulo(first,second);
    cout<<"Remainder : "<<result<<endl;
}