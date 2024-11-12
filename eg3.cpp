#include<iostream>
using namespace std;
int main()
{
    int age=0;
    do
    {
        cout<<"Enter age : ";
        cin>>age;
        cout<<"Welcome to our game: "<<endl;
    }while(age>17);
    
    
    return 0;
}