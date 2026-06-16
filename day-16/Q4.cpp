#include<iostream>
using namespace std;
int main()
{
    int arr[] = {1,2,3,2,4,3,5};
    int n = sizeof(arr)/4;
    cout << "Array after removing duplicates: ";

    for (int i = 0; i < n; i++) {
        int duplicate = false;

        for (int j = 0; j < i; j++) {
            if (arr[i] == arr[j]) {
                duplicate = true;
                break;
            }
        }

        if (!duplicate) {
            cout << arr[i] << " ";
        }
    }
}