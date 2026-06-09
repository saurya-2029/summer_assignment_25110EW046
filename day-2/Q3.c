#include<stdio.h>
int main()
{
    int n, d, product = 1;
    printf("enter a number: ");
    scanf("%d", &n);
    while(n>0)
    {
        d=n%10;
        product=product*d;
        n=n/10;
    }
    printf("product of digit is: %d", product);
    return 0;
    int n, i, f = 1;
    printf("enter a number: ");
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        f = f*i;
    }
    printf("the factorial of %d is: %d", n,f);
    return 0;
}