#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter order of the square matrix: ";
    cin>>n;
    int a[10][10];
    cout<<"enter element of the matrix: ";
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin>>a[i][j];
        }
    }
    int symmetric = true;
    for(int  i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(a[i][j] != a[j][i])
            {
                symmetric = false;
                break;
            }
        }
        if(!symmetric)
        break;
    }
    if(symmetric)
    cout<<"matrix is symmetric";
    else
    cout<<"matrix is not symmetric";
}