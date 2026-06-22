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
    cout<<"length: "<<i;
}