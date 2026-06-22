#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"enter a lower case character: ";
    cin>>ch;
    if(ch >= 'a' && ch <= 'z')
    {
        ch = ch - 32;
        cout<<"upper case character: "<< ch;
    }
    else
    {
        cout<<"enter character is  not a lower case";
    }
}