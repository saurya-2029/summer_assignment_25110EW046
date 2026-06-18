#include<iostream>
using namespace std;
int main()
{
    int a[100], n, k;
    cout<<"enter size of array: ";
    cin>>n;
    cout<<"enter "<< n <<" element in sorted order: ";
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    cout<<"enter element to be searched: ";
    cin>>k;
    int low=0, high=n-1;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(a[mid]==k)
        {
            cout<<"element found at "<< low+1 <<" position";
            return 0;
        }
        else if(a[mid]>k)
        high=mid-1;
        else
        low=mid+1;
    }
    cout<<"element not found";
    return 0;
}