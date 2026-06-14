#include<iostream>
using namespace std;
int main()
{
    int arr[] = {10, 20, 4, 20, 8, 23, 20, 5, 20};
    int n = sizeof(arr)/4;
    int count = 0, element;
    cout<<"enter element to find frequency: ";
    cin>>element;
    for(int i=0; i<n; i++)
    {
        if(arr[i] == element)
        {
            count++;
        }
    }
    cout<<"frequency of "<< element <<" = "<< count;
}