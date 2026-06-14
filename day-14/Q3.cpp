#include<iostream>
using namespace std;
int main()
{
    int arr[] = {10, 5, 96, 79, 56, 65, 98, 54};
    int n = sizeof(arr)/4;
    int largest = arr[0];
    int secondlargest = arr[0];
    for(int i=0; i<n; i++)
    {
        if(arr[i] > largest) 
        {
            secondlargest = largest;
            largest = arr[i];
        }
        else if(arr[i] > secondlargest && arr[i] != largest)
        {
            secondlargest = arr[i];
        }
    }
    cout<<"second largest element: "<< secondlargest;
}