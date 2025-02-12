#include<stdio.h>

int main()
{
    int Arr[4];
    int iCount = 0;

    printf("enter values for array: \n");
    
    for(iCount = 0; iCount <=3; iCount++)
    {
        scanf("%d",&Arr[iCount]);
    }
    
    printf("Values for array are : \n");
    for(iCount = 0; iCount <= 3; iCount++)
    {
        printf("%d ",Arr[iCount]);;
    }

    return 0;
}