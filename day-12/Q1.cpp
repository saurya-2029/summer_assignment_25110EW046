#include<iostream>
using namespace std;
int palindrome(int n)
{
    int temp, reverse = 0;
    temp = n;
    while(n>0)
    {
        reverse = reverse * 10 + n % 10;
        n = n/10;
    }
    return (temp == reverse);
}
int main()
{
    int n;
    cout<<"enter a number: ";
    cin>>n;
    if(palindrome(n))
    cout<<"palindrome";
    else
    cout<<"not a palindrome";
}