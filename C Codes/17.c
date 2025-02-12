#include<stdio.h>

int SumFactors(int iNum)
{
    int iCount = 0;
    int iSum = 0;

    printf("Factors of %d are: \n",iNum);

    for(iCount = 1; iCount <= iNum/2; iCount++)    //2nd  and   time complexity O(N/2) for ex iNum = 8 that y we take < and iNum/2 =8 thats y we take <= sifn
    {
        if(iNum % iCount == 0)              // 1st
        {   
            printf("%d ",iCount);
            iSum = iSum + iCount;           // Sum of all factor's logic
        }
    }
    return iSum;

}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("enter number:  \n");
    scanf("%d",&iValue);

    iRet = SumFactors(iValue);
    printf("\nSum of all factors is:  %d \n",iRet);

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