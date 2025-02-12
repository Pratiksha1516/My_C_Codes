#include<stdio.h>

void DisplayDigit(int iNum)
{
    int iCount = 0;
    if( iNum < 0)
    {
        iNum = -iNum;           // it's called updator as it converts negative programs into positive once
    }

    while(iNum > 0)
    {
        iCount =  iNum % 10;
        printf("%d\n",iCount);
        iNum = iNum / 10;
    }

}


int main()
{
    int iValue = 0;

    printf("enter number:  \n");
    scanf("%d",&iValue);

    DisplayDigit(iValue);

    return 0;

}