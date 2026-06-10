#include<stdio.h>
int main()
{
    int n, count=0;
    printf("enter a number: ");
    scanf("%d", &n);
    while(n>0)
    {
        count = count + (n & 1);
        n = n >> 1;
    }
    printf("number of sets bits: %d\n", count);
    return 0;
}