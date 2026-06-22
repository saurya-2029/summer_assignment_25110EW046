#include<iostream>
using namespace std;
int main()
{
    string str;
    int vowel=0, consonent=0;
    cout<<"enter a string: ";
    cin>>str;
    for(int i=0; i<str.length(); i++)
    {
        char ch = str[i];
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
        vowel++;
        else
        consonent++;
    }
    cout<<"vowel: "<<vowel<<endl;
    cout<<"consonent: "<<consonent<<endl;
}