#include<iostream>
using namespace std;
int main()
{
    int n, i, even=0, odd=0;
    cout<<"enter size of array: ";
    cin>>n;
    int arr[n];
    cout<<"enter "<< n <<" elemente: ";
    for(i=0; i<n; i++)
    {
        cin>>arr[i];
        if (arr[i] % 2 == 0)
        even++;
        else
        odd++;
    }
    cout<<"number of even elements: "<< even <<endl;
    cout<<"number of odd elements: "<< odd <<endl;
}    