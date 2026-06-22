#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char s[100];
    int freq[256] = {0};
    cout << "Enter sentence: ";
    cin.getline(s, 100);
    for(int i = 0; i < strlen(s); i++)
    {
        freq[s[i]]++;
    }
    cout << "Character Frequencies: ";
    for(int i = 0; i < 256; i++)
    {
        if(freq[i] > 0)
        cout << "\n" << char(i) << " = " << freq[i];
    }
}