#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int n;
    cout<<"enter number of words: ";
    cin>>n;
    char s[100][200];
    cout<<"enter words: ";
    for(int i=0; i<n; i++)
    {
        cin>>s[i];
    }
    for(int i=0;  i<n-1; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if((strlen(s[i]) > strlen(s[j])) || (strlen(s[i]) == strlen(s[j]) && strcmp(s[i], s[j]) > 0))
            {
                char temp[200];
                strcpy(temp, s[i]);
                strcpy(s[i], s[j]);
                strcpy(s[j], temp);
            }
        }
    }
    cout<<"sorted words: ";
    for(int i=0;  i<n; i++)
    {
        cout<<s[i]<<endl;
    }
}