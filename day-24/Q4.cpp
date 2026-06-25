#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char s[100];
    int freq[256]={0};
    cout<<"enter sentence: ";
    cin.getline(s, 100);
    int k=0;
    for(int i=0; i<strlen(s); i++)
    {
        freq[s[i]]++;
        if((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z'))
        {
            if(freq[s[i]]==1)
        {
            s[k]=s[i];
            k++;
        }
        }
    }
    s[k]='\0';
    cout<<"after removing duplicate: "<<s<<endl;
    return 0;
}