#include<stdio.h>

int main()
{
    int iValue = 0;
    printf("Enter value: ");
    scanf("%d",&iValue);

    int icount = 0;
    for(icount = 1; icount <=iValue; icount++)
    {
        printf("%d\n",icount);
    }

    return 0;

}