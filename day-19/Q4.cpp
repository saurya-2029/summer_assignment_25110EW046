#include<iostream>
using namespace std;
int main()
{
    int n, sum=0, i, j;
    cout<<"enter order of the square matrix: ";
    cin>> n;
    int a[10][10];
    cout<<"enter element of first matrix: ";
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            cin>>a[i][j];
        }
    }
    for(i=0; i<n; i++)
    {
        sum = sum + a[i][i];
    }
    cout<<"sum of diagonal matrix: "<< sum <<endl;
} 