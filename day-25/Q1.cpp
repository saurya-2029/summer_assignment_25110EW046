#include<iostream>
using namespace std;
int main()
{
    int a[100], b[100], c[200];
    int n1, n2;
    cout<<"enter size of array 1: ";
    cin>>n1;
    cout<<"enter element of array 1: ";
    for(int i=0; i<n1; i++)
    {
        cin>>a[i];
    }
    cout<<"enter size of array 2: ";
    cin>>n2;
    cout<<"enter element of array 2: ";
    for(int i=0; i<n2; i++)
    {
        cin>>b[i];
    }
    int i=0, j=0, k=0;
    while(i<n1 && j<n2)
    {
        if(a[i]<b[j])
        {
            c[k]=a[i];
            i++;
            k++;
        }
        else
        {
            c[k]=b[j];
            j++;
            k++;
        }
    }
    while(i<n1)
    {
        c[k]=a[i];
        i++;
        k++;
    }
    while(j<n2)
    {
        c[k]=b[j];
        j++;
        k++;
    }
    cout<<"merged array: ";
    for(int i=0; i<k; i++)
    {
        cout<<c[i];
    }
}