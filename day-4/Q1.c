#include<stdio.h>
int main()
{
    int a=0, b=1, n, i, c;
    printf("enter the  number of terms: ");
    scanf("%d", &n);
    if(n<=0)
    {
        printf("invalid number of terms");
    }
    else
    {
        printf("fibonacci series: ");
        for(i=1; i<=n; i++)
        {
            printf("\t%d", a);
            c=a+b;
            a=b;
            b=c;
        }
    }
    return 0;
}