#include<iostream>
using namespace std;
int main()
{
    int n, i, large, small;
    cout<<"enter size of array: ";
    cin>>n;
    int arr[n];
    cout<<"enter "<< n <<" elemente: "<<endl;
    for(i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    large = arr[0];
    small = arr[0];
    {
        for(i=0; i<n; i++)
        {
            if(arr[i] > large)
            large = arr[i];
            if(arr[i] < small)
            small = arr[i];
        }
        cout<<"largest element "<< large <<endl;
        cout<<"smallest element "<< small << endl;
    }
}