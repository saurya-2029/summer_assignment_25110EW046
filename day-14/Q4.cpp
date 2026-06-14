#include<iostream>
using namespace std;
int main()
{
    int arr[] = {10, 20, 4, 3, 20, 4};
    int  n = sizeof(arr)/4;
    cout<<"duplicates elements are: ";
    for(int i=0; i<n; i++)
    {
        int duplicate = false;
        for(int j=0; j<i; j++)
        {
            if(arr[i] == arr[j])
            {
                duplicate = true;
                break;
            }
        }
        if(duplicate)
        {
            cout<<arr[i]<<" ";
        }
    }
}            