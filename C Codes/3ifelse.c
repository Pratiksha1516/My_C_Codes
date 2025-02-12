#include<stdio.h>

void displayresult(float fPercentage)       //fun name: displayresult with parameter fPercentage
{

    if(fPercentage > 100.0f)
    {
        printf("invalid percentage please enter valid percentage");
    }
    if(fPercentage>=35.0f)
    {
        printf("You are pass...\n");
    }
    else
    {
        printf("You are fail.");
    }
}


int main()                                  //entry poit of the program
{
    float fValue1 = 0.0f;                   //local variable

    printf("Enter the Percentage:  \n");
    scanf("%f",&fValue1);

    displayresult(fValue1);                 //function calling


    return 0;
}