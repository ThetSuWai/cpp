#include<iostream>
#include<functional>
using namespace std;

int add(int a,int b)
{
    int sum;
    return sum=a+b;
}

int main()
{
    int a=10;
    int b=20;
    cout<<add(a,b)<<endl;
    auto add1=std::bind(&add,std::placeholders::_1,std::placeholders::_2);
    cout<<add1(4,5)<<endl;
}