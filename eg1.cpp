#include<iostream>
using namespace std;
int main()
{
    int num=0,result=0;
    cout<<"Enter number: ";
    cin>>num;
    for(int i=0;i<=num;i++)
    {
        result=result+i;
    }
    cout<<"Result is: "<<result<<endl;
}