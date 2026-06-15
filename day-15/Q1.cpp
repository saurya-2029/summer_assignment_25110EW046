#include<iostream>
using namespace std;
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr)/4;
    int i, start=0, end=n-1, temp;
    while(start < end)
    {
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
    cout<<"reversed array: ";
    for(i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}