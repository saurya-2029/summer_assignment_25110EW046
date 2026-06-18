#include<iostream>
using namespace std;
int main()
{
    int a[100], n, i=0, j;
    cout<<"enter size of array: ";
    cin>>n;
    cout<<"enter "<< n <<" element: ";
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(int i=0; i<n; i++)
    {
        int min = i;
        for(int j=i; j<n; j++)
        {
            if(a[j]<a[min])
            min = j;
        }    
            int temp = a[min];
            a[min] = a[i];
            a[i] = temp;
    }
    cout<<"sorted array: ";
    for(int i=0; i<n; i++)
    cout<<a[i]<<" ";
}    