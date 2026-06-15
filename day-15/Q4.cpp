#include<iostream>
using namespace std;
int main(){
    int arr[] = {1, 0, 3, 5, 2, 0};
    int n = sizeof(arr)/4;
    int i, j=0;
    for(i=0; i<n; i++){
        if(arr[i] != 0){
            swap(arr[i], arr[j]);
            j++;
        }
    }
    cout<<"array after zeroes moving to end: ";
    for(i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}