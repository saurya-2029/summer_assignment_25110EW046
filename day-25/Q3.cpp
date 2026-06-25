#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int n;
    cout<<"enter number of names: ";
    cin>>n;
    char s[100][200];
    cout<<"enter names: ";
    for(int i=0; i<n; i++)
    {
        cin>>s[i];
    }
    for(int i=0;  i<n-1; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(strcmp(s[i], s[j])>0)
            {
                char temp[100];
                strcpy(temp, s[i]);
                strcpy(s[i], s[j]);
                strcpy(s[j], temp);
            }
        }
    }
    cout<<"sorted names: ";
    for(int i=0;  i<n; i++)
    {
        cout<<s[i]<<endl;
    }
}