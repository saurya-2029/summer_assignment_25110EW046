#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str1, str2;
    cout<<"enter string 1: ";
    cin>>str1;
    cout<<"enter string 2: ";
    cin>>str2;
    if(str1.length() != str2.length())
    {
        cout<<"string are not anagram";
        return 0;
    }
    int freq[256] = {0};
    for(int i=0; i<str1.length(); i++)
    {
        freq[str1[i]]++;
        freq[str2[i]]--;
    }
    for(int i=0; i<256; i++)
    {
        if(freq[i] != 0)
       {
           cout<<"string are not anagram";
           return 0;
        }
    }
    cout<<"string are anagram";
    return 0;

}