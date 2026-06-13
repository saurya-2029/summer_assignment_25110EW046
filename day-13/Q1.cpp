#include<iostream>
using namespace std;
int main()
{
    int n, i;
    cout<<"enter size of array: ";
    cin>>n;
    int arr[n];
    cout<<"enter "<< n <<" elemente: "<<endl;
    for(i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    cout<<"array elements are: "<<endl;
    for(i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
}