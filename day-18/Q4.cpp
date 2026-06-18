#include<iostream>
using namespace std;
int main()
{
    int a[100], n;
    cout<<"enter size of array: ";
    cin>>n;
    cout<<"enter "<< n <<" element: ";
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(int i=0; i<n-1; i++)
    {
        for(int j=0; j<n-i-1; j++)
        {
            if(a[j]<a[j+1])
            {
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    cout<<"sorted array: ";
    for(int i=0; i<n; i++)
    cout<<a[i]<<" ";
}    