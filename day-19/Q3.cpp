#include<iostream>
using namespace std;
int main()
{
    int r, c, i, j;
    cout<<"enter number of row and column: ";
    cin>> r >> c;
    int a[10][10];
    cout<<"enter element of first matrix: ";
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<"transpose of the matrix: ";
    for(i=0; i<c; i++)
    {
        for(j=0; j<r; j++)
        {
            cout<<a[j][i]<<" ";
        }
    }
    cout<<endl;
}    