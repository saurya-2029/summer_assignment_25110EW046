#include<iostream>
using namespace std;
int main()
{
    int i, n, key;
    cout<<"enter the number of elements: ";
    cin>>n;
    int arr[n];
    cout<<"enter the elements: ";
    for(i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    cout<<"enter the element to searched: ";
    cin>>key;
    int found = false;
    for(i=0; i<n; i++)
    {
        if(arr[i] == key)
        {
            cout<<"element found at position: "<< i+1 <<endl;
            found = true;
            break;
        }
    }
    if(!found)
    {
        cout<<"element not found"<<endl;
    }       
}            