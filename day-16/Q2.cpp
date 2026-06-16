#include<iostream>
using namespace std;
int main()
{
    int arr[] = {1, 2, 5, 6, 2, 8, 2, 3};
    int n = sizeof(arr)/4;
    int maxFreq = 0;
    int maxElement = arr[0];
    for(int i=0; i<n; i++)
    {
        int count = 1;
    for(int j= i+1; j<n; j++)
    {
        if(arr[i] == arr[j])
        {
            count++;
        }
    }
    if(count > maxFreq)
    {
        maxFreq = count;
        maxElement = arr[i];
    }
}
cout<<"element with max frequency: "<< maxElement << endl;
cout<<"frequency: "<< maxFreq <<endl;
}