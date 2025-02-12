#include<stdio.h>

void Display(int iVal)
{
    int icount = 0;
    for(icount = 1; icount <=iVal; icount++)
    {
        printf("%d\n",icount);
    }

}
int main()
{   
    int iNum = 0;
    printf("Enter number:  ");
    scanf("%d",&iNum);          //taking user input

    Display(iNum);

    return 0;
}