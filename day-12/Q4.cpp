#include<iostream>
using namespace std;
int perfect(int n)
{
    int sum=0, i;
    for(i=1; i<=n/2; i++)
    {
        if(n%i==0)
        sum = sum + i;
    }
    return(sum == n);
}
int main()
{
    int n;
    cout<<"enter a number: ";
    cin>>n;
    if(perfect(n))
    cout<<"perfect number";
    else
    cout<<"not a perfect number";
}