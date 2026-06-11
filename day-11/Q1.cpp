#include<iostream>
using namespace std;
int sum(int a, int b)
{
    return a + b;
}
int main()
{
    int a, b;
    cout<<"enter two number: ";
    cin>>a>>b;
    cout<<"sum of two number: "<<sum(a,b);
}
