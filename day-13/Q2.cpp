#include<iostream>
using namespace std;
int main()
{
    int n, i, sum = 0;
    cout<<"enter size of array: ";
    cin>>n;
    int arr[n];
    cout<<"enter "<< n <<" elemente: "<<endl;
    for(i=0; i<n; i++)
    {
        cin>>arr[i];
        sum = sum + arr[i];
    }
    float average =(float) sum/n;
    cout<<"sum = "<< sum <<endl;
    cout<<"average = "<< average <<endl;
}