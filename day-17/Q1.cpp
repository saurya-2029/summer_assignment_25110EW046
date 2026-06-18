#include<iostream>
using namespace std;
int main()
{
    int a[100], b[100], c[100];
    int n1, n2, j=0;
    cout<<"enter size of array 1: ";
    cin>>n1;
    cout<<"enter "<< n1 <<" elments: ";
    for(int i=0; i<n1; i++)
    {
        cin>>a[i];
        c[j] = a[i];
        j++;
    }
    cout<<"enter size of array 2: ";
    cin>>n2;
    cout<<"enter "<< n2 <<" elments: ";
    for(int i=0; i<n2; i++)
    {
        cin>>b[i];
        c[j] = b[i];
        j++;
    }
    cout<<"merged array: ";
    for(j=0; j<n1+n2; j++)
    cout<<c[j]<<" ";
}