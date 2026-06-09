#include<stdio.h>
int main()
{
    int a=0, b=1, n, c, i;
    printf("enter the value of n:");
    scanf("%d", &n);
    if(n<=0)
    {
        printf("invalid number of terms");
    }
    else
    {
        for(i=3; i<=n; i++)
        {
            c=a+b;
            a=b;
            b=c;
        }
        printf("the %dth fibonacci term is: %d", n, b);
    }
    return 0;
}