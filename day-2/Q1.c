#include<stdio.h>
int main()
{
    int n, i, d, s=0;;
    printf("enter a number: ");
    scanf("%d", &n);
    while(n>0)
    {
        d=n%10;
        s=s+d;
        n=n/10;
    }
    printf("the sum of digit is: %d", s);
    return 0;
    int n, i, sum = 0;
    printf("enter a positive integer: ");
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        sum = sum + i;
    }
    printf("the sum of first %d natural numbers is: %d" , n, sum);
    return 0;
}