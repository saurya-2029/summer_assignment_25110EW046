#include<stdio.h>
int main()
{
    int a, b, temp;
    printf("enter first number: ");
    scanf("%d",&a);
    printf("enter second number: ");
    scanf("%d", &b);
    while(b>0)
    {
        temp = b;
        b = a % b;
        a = temp;
    }
    printf("GCD is: %d", a);
    return 0;
}