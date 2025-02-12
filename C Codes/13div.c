//  on number
#include<stdio.h>           
#include<stdbool.h> //  checck whether true or false

bool CheckDivisible(int iVal)
{
        int iAns = 0;       //local variable
        iAns = iVal % 5;
        if(iAns == 0)
        {
            return true;    // this value will go to the bFlag variable
        }
        else
        {
            return false;
        }

}
int main()
{
    int icount = 0;     // to take ip from user
    bool bFlag = true; //to store the fun's return value ( os consider internally true=1; false=0 )

    printf("Enter number:  ");
    scanf("%d",&icount);

    bFlag = CheckDivisible(icount);
    if(bFlag == true)
    {
        printf("%d is divisible by 5\n",icount);
    }
    else
    {
        printf("%d is not divisible by 5 \n",icount);
    }

    return 0;
}