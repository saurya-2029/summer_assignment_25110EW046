#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<"enter age of voters: ";
    cin>>age;
    if(age>=18)
    {
        cout<<"eligible to vote";
    }
    else
    {
        cout<<"not eligible to vote";
    }
}