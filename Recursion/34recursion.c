#include<stdio.h>

void DisplayR()         // R indicate recursion
{
    
    static int iCount = 1;      //memory allocation for local variable iCount is STACK SECTION // and static local variable gets initialized only once
   
    if(iCount <= 5 )
    {
        printf("%d\n",iCount);
        iCount++;
        DisplayR();     // Recursion call
    }

}

int main()
{
    printf("Inside the main:\n");

    DisplayR();

    printf("End of the main");

    return 0;
}