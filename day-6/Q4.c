#include<stdio.h>
int main()
{
    int x, n, i, result=1;
    printf("enter base value: ");
    scanf("%d", &x);
    printf("enter power value: ");
    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        result = result * x;
    }
    printf("%d^%d = %d\n", x, n, result);
    return 0;
}