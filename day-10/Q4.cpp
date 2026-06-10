#include<iostream>
using namespace std;
int main()
{
    int i, j, space;
    for(i=1; i<=5; i++)
    {
        for(space=1; space<=5-i; space++)
        {
            cout<<" ";
        }
        {
            for(j=1; j<=i; j++)
            {
                cout<<(char)(j+64);
            }
            for(j=i-1; j>=1; j--)
            {
                cout<<(char)(j+64);
            }
            cout<<endl;
        }
    }
}