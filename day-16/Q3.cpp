#include<iostream>
using namespace std;
int main()
{
    int arr[] = {1,2,3,6,4,};
    int n = sizeof(arr)/4;
    int sum;
    cout<<"enter target sum: ";
    cin>>sum;
     int found = false;

    for (int i = 0; i < n; i++) 
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == sum)
            {
                cout << "Pair found: " << arr[i] << " and " << arr[j] << endl;
                found = true;
                break;
            }
        }
        if (found)
            break;
    }

    if (!found) 
    {
        cout << "No pair found." << endl;
    }
}