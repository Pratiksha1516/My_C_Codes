#include<stdio.h>

int Mul()
{
    int iNo = 5;

    int iNo1 = 5;

    int ans = iNo*iNo1;

    return ans;
}

void Substraction()
{

    int iNum = 13;

    int iNum1 = 11;

    int Ans = iNum-iNum1;

    printf("Substraction is :%d \n",Ans);

}



int main()
{
    int iRet;
    iRet = Mul();
    printf("multiplication is %d\n", iRet);


    Substraction();

    return 0;

}