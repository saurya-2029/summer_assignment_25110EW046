#include<iostream>
using namespace std;
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr)/4;
    int i, first = arr[0];
    for(i=0; i<n-1; i++)
    {
        arr[i] = arr[i+1];
    }
    arr[n-1] = first;
    cout<<"array after left rotation: ";
    for(i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}