#include<iostream>
using namespace std;
int fib(int n)
{
    int a = 0, b=1, c, i;
    cout<<"fibonacci series: ";
    for(i=0; i<n; i++)
    {
    cout<<a<<" ";
        c = a + b;
        a = b;
        b = c;
    }
    return 0;
}
int main()
{
    int n;
    cout<<"enter the number of terms: ";
    cin>>n;
    fib(n);
}