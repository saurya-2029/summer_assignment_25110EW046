#include<iostream>
#include<cmath>
using namespace std;
int armstrong(int n)
{
    int temp, x, d=0, rem, sum=0;
    x = n;
    temp = n;
    while(temp>0)
    {
        d++;
        temp = temp/10;
    }
    temp = n;
    while(temp>0)
    {
        rem = temp % 10;
        sum = sum + pow(rem,d);
        temp = temp / 10;
    }
    return (sum == x);
}
int main()
{
    int n;
    cout<<"enter a number: ";
    cin>>n;
    if(armstrong(n))
    cout<<"armstrong number";
    else
    cout<<"not a armstrong number";
}