#include<iostream>
using namespace std;
int prime(int n)
{
    int i;
    if (n<=1)
    return 0;
    for(i=2; i<=n/2; i++)
    {
        if (n%i==0)
        return 0;
        else 
        return 1;
    }
}
int main()
{
    int n;
    cout<<"enter a number: ";
    cin>>n;
    if(prime(n))
    cout<<"prime number";
    else
    cout<<"not a prime number";
}