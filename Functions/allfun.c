#include<stdio.h>

int Addition()
{
    int iNum = 5;

    int iNum1 = 10;

    int ans = iNum+iNum1;

    return ans;
}

int Substraction()
{
    int iNum = 5;

    int iNum1 = 10;

    int ans = iNum-iNum1;

    return ans;
}

int Multiplication()
{
    int iNum = 5;

    int iNum1 = 10;

    int ans = iNum*iNum1;

    return ans;
}

int Division()
{
    int iNum = 50;

    int iNum1 = 10;

    int ans = iNum/iNum1;

    return ans;
}

int main()
{

    int iRet=0;
    iRet = Addition();
    printf("addition is :%d\n",iRet);

    int iRet1 = 0;
    iRet1 = Substraction();
    printf("substraction is :%d\n", iRet1);

    int iRet2 = 0;
    iRet2 = Multiplication();
    printf("Multiplication is :%d\n", iRet2);

    int iRet3 = 0;
    iRet3 = Division();
    printf("Division is :%d\n", iRet3);

    return 0;
}
