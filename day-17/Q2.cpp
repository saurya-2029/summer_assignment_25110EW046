#include<iostream>
using namespace std;
int main()
{
    int a[100], b[100], c[100];
    int n1, n2, k=0;
    cout<<"enter size of array 1: ";
    cin>>n1;
    cout<<"enter "<<n1<<" element: ";
    for(int i=0; i<n1; i++)
    {
        cin>>a[i];
        c[k]=a[i];
        k++;
    }
    cout<<"enter size of array 2: ";
    cin>>n2;
    cout<<"enter "<<n2<<" element: ";
    for(int i=0; i<n2; i++)
    {
        cin>>b[i];
        int flag = 0;
        for(int j=0; j<k; j++)
        {
            if(c[j]==b[i])
            {
                flag = 1;
                break;
            }
        }
        if(flag==0)
        {
            c[k]=b[i];
            k++;
        }
    }
    cout<<"union of array: ";
    for(int i=0; i<k; i++)
    cout<<c[i]<<" ";    
}