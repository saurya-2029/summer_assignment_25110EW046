#include<stdio.h>
int main()
{
    int a, b, x, y, gcd, temp, lcm;
    printf("enter first number: ");
    scanf("%d",&a);
    printf("enter second number: ");
    scanf("%d", &b);
    x = a;
    y =b;
    while(y>0)
    {
        temp = y;
        y = x % y;
        x = temp;
    }
    gcd = x;
    lcm = (a*b)/gcd;
    printf("LCM is: %d", lcm);
    return 0;
}