#include<stdio.h>
int main()
{
    int lower, upper, i, j, temp;
    printf("enter lower value: ");
    scanf("%d", &lower);
    printf("enter upper value: ");
    scanf("%d", &upper);
    printf("prime number between %d and %d are: ", lower, upper);
    for(i=lower; i<=upper; i++)
    {
        if(i<=2)
        continue;
        temp = 1;
        for(j=2; j<=i/2; j++)
        {
            if(i%j==0)
            {
                temp = 0;
                break;

            }
        }
        if(temp == 1)
        {
            printf("%d \n", i);
        }
    }
    return 0;
}