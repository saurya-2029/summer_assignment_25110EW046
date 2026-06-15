#include<iostream>
using namespace std;
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n= sizeof(arr)/4;
    int i, last = arr[n-1];
    for(i=n-1; i>0; i--)
    {
        arr[i] = arr[i-1];
    }
    arr[0] = last;
    cout<<"array after right rotation: ";
    for(i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}    