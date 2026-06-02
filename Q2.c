#include<stdio.h>
int main()
{
    int n, d, rev = 0;
    printf("enter a number: ");
    scanf("%d", &n);
    while(n>0)
    {
        d=n%10;
        rev=rev*10 + d;
        n=n/10;
    }
    printf("reverse number is: %d", rev);
    return 0;
    int i, n;
    printf("enter a positive number: ");
    scanf("%d", &n);
    for(i=1; i<=10; i++)
    {
        printf("%d * %d = %d \n ", n, i, n*i);
    }
    return 0;

}