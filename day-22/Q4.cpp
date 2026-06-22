#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char s[200];
    int j=0;
    cout<<"enter sentence: ";
    cin.getline(s, 200);
    int i=0;
    for(int i=0; i<strlen(s); i++)
    {
        if(s[i]!=' ')
        {
            s[j]=s[i];
            j++;
        }
    }
    s[j]='\0';
    cout<<"string after removing spaces: "<<s;
}