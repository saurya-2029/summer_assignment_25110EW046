#include<iostream>
using namespace std;
int main()
{
    int r, c;
    cout<<"enter number of row and column: ";
    cin>>r>>c;
    int a[10][10];
    cout<<"enter element of the matrix: ";
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<"row-wise sum: "<<endl;
    for(int i=0; i<r; i++)
    {
        int sum = 0;
        for(int j=0; j<c; j++)
        {
            sum = sum + a[i][j];
        }
        cout<<"sum of row "<< i+1 <<" = "<<sum <<endl;
    }
}