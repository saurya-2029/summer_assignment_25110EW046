#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str;
    cout<<"enter string: ";
    getline(cin, str);
    int freq[256]={0};
    for(int i=0; i<str.length(); i++)
    {
        freq[str[i]]++;
    }
    for(int i=0; i<str.length(); i++)
    {
        if(freq[str[i]]==1)
        {
            cout<<"first non repeating character: "<<str[i]<<endl;
            return 0;
        }
    }
    cout<<"no non repeating  character: "<<endl;
}