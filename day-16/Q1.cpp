#include<iostream>
using namespace std;
int main()
{
    int arr[] = {1,2,3,5};
    int n = sizeof(arr)/4;
    int expectedSum = n * (n+1)/2;
    int actualSum = 0;
    for(int i=0; i<n-1; i++)
    {
        actualSum = actualSum + arr[i];
    }
    int missingNumber = expectedSum - actualSum;
    cout<<"missing number is: "<< missingNumber <<endl;
}