#include<iostream>
using namespace std;
int main()
{
    int a[100], b[100], c[100];
    int n1, n2;
    cout<<"enter size of array 1: ";
    cin>>n1;
    cout<<"enter "<<n1<<" element: ";
    for(int i=0; i<n1; i++)
    {
        cin>>a[i];
    }
    cout<<"enter size of array 2: ";
    cin>>n2;
    cout<<"enter "<<n2<<" element: ";
    for(int i=0; i<n2; i++)
    {
        cin>>b[i];
    }
    cout<<"common element: ";
    for(int i=0; i<n1; i++)
    {
        for(int j=0; j<n2; j++)
        {
            if(a[i]==b[j])
            {
                cout<<b[j]<<" ";
                break;
            }
        }
    }
}        