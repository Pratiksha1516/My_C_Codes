#include<stdio.h>

int Division()
{
    int iNum= 50;

    int iNum1 = 10;

    int ans = iNum/iNum1;

    return ans;
}

int main()
{
    int iRet = 0;

    iRet = Division();
  
    printf("division is : %d",iRet);

    return 0;

}
