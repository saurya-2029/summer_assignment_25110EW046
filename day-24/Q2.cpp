#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char s[100];
    cout<<"enter string: ";
    cin>>s;
    cout<<"compressed string: ";
    int i=0;
    while(i<strlen(s))
    {
        int c=0;
        char ch=s[i];
        while(i<strlen(s) && s[i]==ch)
        {
            c++;
            i++;
        }
        cout<<ch<<c;
    }
    return 0;
}