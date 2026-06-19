#include<iostream>
using namespace std;
int main()
{
    int row, col, i, j;
    cout<<"enter number of row and column: ";
    cin>> row >> col;
    int a[10][10], b[10][10], c[10][10];
    cout<<"enter element of first matrix: ";
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<"enter element of second matrix: ";
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            cin>>b[i][j];
        }
    }
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            c[i][j] = a[i][j] - b[i][j];
        }
    }
    cout<<"subtract of matrix: ";
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            cout<<c[i][j]<<" ";
        }
        cout<<endl;
    }
}