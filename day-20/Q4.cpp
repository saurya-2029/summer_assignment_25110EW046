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
    cout<<"column-wise sum: "<<endl;
    for(int j=0; j<c; j++)
    {
        int sum = 0;
        for(int i=0; i<r; i++)
        {
            sum = sum + a[i][j];
        }
        cout<<"sum of column "<< j+1 <<" = "<<sum <<endl;
    }
}