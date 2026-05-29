#include<stdio.h>
int main()
{
    int d, n, count = 0;
    printf("enter a number: ");
    scanf("%d", &n);
    while(n>0)
    {
        d = n % 10;
        count++;
        n=n/10;
    }
    printf("count is: %d", count);
    return 0;
}