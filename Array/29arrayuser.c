#include<stdio.h>

int main()
{
    int Arr[4];
    int iCount = 0;

    printf("enter values for array: \n");
    scanf("%d",&Arr[0]);
    scanf("%d",&Arr[1]);
    scanf("%d",&Arr[2]);
    scanf("%d",&Arr[3]);

    
    printf("Values for array are : \n");
    for(iCount = 0; iCount <= 3; iCount++)
    {
        printf("%d ",Arr[iCount]);;
    }

    return 0;
}