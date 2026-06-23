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
    char maxchar;
    int maxfreq=0;
    for(int i=0; i<str.length(); i++)
    {
        if(freq[str[i]]> maxfreq)
        {
            maxfreq = freq[str[i]];
            maxchar = str[i];
        }
    }
    cout << "Maximum occurring character: " << maxchar << endl;
    cout << "Frequency: " << maxfreq << endl;
}