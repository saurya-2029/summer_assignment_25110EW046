#include<stdio.h>
int main()
{
    int a, b, n, temp, d, sum;
    printf("enter first number: ");
    scanf("%d", &a);
    printf("enter second number: ");
    scanf("%d", &b);
    printf("armstrong number between %d and %d are: ", a, b);
    for(n=a; n<=b; n++)
    {
        temp=n;
        sum=0;
        while(temp>0)
        {
            d=temp%10;
            sum = sum + d*d*d;
            temp=temp/10;
        }
        if(sum==n)
        {
            printf("\t%d", n);
        }
    }
    return 0;
}