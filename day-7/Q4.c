#include<stdio.h>
int reverse = 0;
void reverseNumber(int n)
{
    if (n==0)
    return;
    else
    reverse = reverse * 10 + (n % 10);
    return reverseNumber(n/10);
}
int main()
{
    int n;
    printf("enter a number: ");
    scanf("%d", &n);
    reverseNumber(n);
    printf("reverse of number is: %d", reverse);
    return 0;
}