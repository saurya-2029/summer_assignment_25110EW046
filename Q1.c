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
}