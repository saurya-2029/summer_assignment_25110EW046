#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char s[100];
    int freq[256] = {0};
    cout<<"enter string: ";
    cin>>s;
    for(int i=0; i<strlen(s); i++)
    {
        freq[s[i]]++;
    }
    cout<<"common character: ";
    for(int i=0; i<256; i++)
    {
        if(freq[i]>1)
        cout<<char(i)<<" ";
    }
}