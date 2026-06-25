#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char s[200], l[100];
    int i=0, max=0;
    cout<<"enter sentence: ";
    cin.getline(s, 200);
    while(i<strlen(s))
    {
        char a[100];
        int j=0;
        while(i<strlen(s) && s[i] != ' ')
        {
            a[j] =  s[i];
            j++;
            i++;
        }
        a[j] = '\0';
        if(j>max)
        {
            max=j;
            strcpy(l, a);
        }
        i++;
    }
    cout<<"longest word: "<<l;
}