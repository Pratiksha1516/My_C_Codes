#include<stdio.h>

void Display(int iNum)
{
    int icount = 0;
    for(icount = 1; icount <=iNum; icount++)
    {
        printf("%d\n",icount);
    }
}

int main()
{
    int iValue = 0;
    printf("Enter value: ");
    scanf("%d",&iValue);        //dynamic because we take i/p from user

    Display(iValue);
    
    return 0;

}