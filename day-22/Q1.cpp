#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char s[100];
    int flag=1;
    cout<<"enter a string: ";
    cin>>s;
    int i=0, l=strlen(s)-1;
    while(i<1)
    {
        if(s[i]!=s[l])
        {
            flag=0;
            break;
        }
        i++;
        l--;
    }
    if(flag==1)
    cout<<"string is palindrome";
    else
    cout<<"string is not palindrome";  
}