#include<stdio.h>
#include<math.h>
int main()
{
    int dec=0, bin, i=0, j, d;
    printf("enter a binary number: ");
    scanf("%d", &bin);
    while(bin>0)
    {
        d = bin % 10;
        dec = dec + d * pow(2, i);
        bin = bin / 10;
        i++;
    }
    printf("decimal: %d\n", dec);
    return 0;
}