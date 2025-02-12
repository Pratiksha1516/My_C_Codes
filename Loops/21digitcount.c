#include<stdio.h>

int DigitCount(int iNum)
{
    int iCount = 0;
     if(iNum < 0)
    {
        iNum = -iNum;           //updator as it converts -ve vlaues in +ve one it should be here onnly if take this  at  the bottom then ans it(ans) will be 0 
    }

    while(iNum > 0)
    {
        iCount++;
        iNum = iNum / 10;       // it helps in displaying each single digit on the screen
    }
   
    return iCount;              // iCount will retturn the count of the numbers then iRet will hold that in main fun
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("enter number : \n");
    scanf("%d",&iValue);

    iRet = DigitCount(iValue);
    printf("number of digits are : %d\n ",iRet);


    return 0;
}