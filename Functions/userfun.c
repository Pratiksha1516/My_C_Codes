#include<stdio.h>

int addition(int Num, int Num1)
{

    int ans = Num+Num1;

    return ans;
}

int main()
{
    int iNo = 0, iNo1 = 0, iRet;
    printf("enter values for iNo :");
    scanf("%d",&iNo);

    printf("enter values for iNo1 :");
    scanf("%d",&iNo1);

    iRet = addition(iNo,iNo1);

    printf("addition is :%d \n",iRet);

    return 0;
}