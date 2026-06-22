#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char s[200];
    int c=1;
    cout<<"enter sentence: ";
    cin.getline(s, 200);
    for(int i=0; i<strlen(s); i++)
    {
        if(s[i]==' ')
        c++;
    }
    cout<<"number of words: "<<c;
}