#include<iostream>
using namespace std;
int fact(int n)
{
    int i, fact=1;
    for(i=1; i<=n; i++)
    {
        fact = fact * i;
    }
    return fact;
}
int main()
{
    int n;
    cout<<"enter a number: ";
    cin>>n;
    cout<<"factorial is: "<<fact(n);
}