#include<iostream>
using namespace std;
int main()
{
    char str[50];
    int i=0;
    cout<<"enter a string: ";
    cin>>str;
    while(str[i] != '\0')
    {
        i++;
    }
    cout<<"reverse string: ";
    for(int j=i-1; j>=0; j--)
    {
        cout<<str[j];
    }
}    