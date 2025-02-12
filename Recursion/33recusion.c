#include<stdio.h>

void DisplayI()         // I indicates iteration
{
    int iCount = 0;

    for(iCount = 1; iCount <= 5; iCount++)
    {
        printf("*\n",iCount);

    }

}

int main()
{
    DisplayI();

    return 0;
}