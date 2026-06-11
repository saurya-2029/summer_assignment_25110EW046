#include<iostream>
using namespace std;
int max(int a, int b)
{
    if (a>b)
    {
        return a;
    }
    else
    {
        return b;
    }
}
int main()
{
    int a, b;
    cout<<"enter two number: ";
    cin>>a>>b;
    cout<<"largest of two number: "<<max(a,b);
}