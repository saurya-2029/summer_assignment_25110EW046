#include<stdio.h>
int main()
{
    int n, d, rev = 0, temp;
    printf("enter a number: ");
    scanf("%d", &n);
    temp = n;
    while(n>0)
    {
        d = n % 10;
        rev = rev * 10 + d;
        n = n / 10;
    } 
    if(temp == rev)
    {
        printf("the number is palindrome");
    }
    else
    {
        printf("the number is not palindrome");
        return 0;
    }
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