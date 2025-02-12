#include<stdio.h>

void DisplayFactors(int iNum)
{
    int iCount = 0;

    printf("Factors of %d are: \n",iNum);

    for(iCount = 1; iCount <= iNum/2; iCount++)    //2nd   and  O(N/2)
    {
        if(iNum % iCount == 0)              // 1st
        {
            printf("%d\n",iCount );
        }
    }

}
int main()
{
    int iValue = 0;

    printf("enter number:  \n");
    scanf("%d",&iValue);

    DisplayFactors(iValue);

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