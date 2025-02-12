//perfect number
#include<stdio.h>
#include<stdbool.h>

int CheckPerfect(int  iNum)
{
    int iCount = 0;
    int iSum = 0;

    printf("Factors of %d are: \n",iNum);

    for(iCount = 1; iCount <= iNum/2; iCount++)    //2nd  and   time complexity O(N/2) for ex iNum = 8 that y we take < and iNum/2 =8 thats y we take <= sifn
    {
        if(iNum % iCount == 0)              // 1st
        {   
            printf("%d \n",iCount);
            iSum = iSum + iCount;           // Sum of all factor's logic
        }
    }
    if(iSum == iNum)
        {
            return true;
        }
        else
        {
            return false;
        }

    return iSum;

}
int main()
{
    int iValue = 0;
    bool bRet = 0;

    printf("enter number:  \n");
    scanf("%d",&iValue);

    bRet = CheckPerfect(iValue);
    if(bRet == true)
    {
        printf("\n %d is Perfect number  ",iValue);
    }
    else
    {
        printf("\n %d is not Perfect number ",iValue);
    }

    return 0;
}



/*
    fun's logic:
    iNum%1==0
    iNum%2==0
    iNum%3==0
    iNum%4==0
    iNum%5==0
    .
    .
    .

*/

