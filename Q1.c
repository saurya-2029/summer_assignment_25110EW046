#include<stdio.h>
int main()
{
    int dec, bin[32], i=0, j;
    printf("enter a decimal number: ");
    scanf("%d", &dec);
    if (dec==0)
    {
        printf("binary: 0");
        return 0;
    }
    while (dec>0)
    {
        bin[i] = dec % 2;
        dec = dec / 2;
        i++;
    }
    printf("binary: ");
    for (j=i-1; j>=0; j--)
    {
        printf("%d", bin[j]);
    }
    printf("\n");
    return 0;
}