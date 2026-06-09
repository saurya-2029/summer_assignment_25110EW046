#include<stdio.h>
int main()
{
    int n, temp, d, result=0;
    printf("enter a number: ");
    scanf("%d", &n);
    temp=n;
    while(temp!=0)
    {
        d=temp%10;
        result = result + d*d*d;
        temp=temp/10;
    }
    if(result==n)
    {
        printf("armstrong number is: %d", n);
    }
    else
    {
        printf("not an armstrong number: %d", n);
    }
    return 0;
}