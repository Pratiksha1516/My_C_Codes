#include<stdio.h>

void displaytimetable(int istd)
{       

    if(istd == 8)
    {
        printf("your exams are at 9:30  \n");
    }
    else if(istd == 9)
    {
        printf("Your exams at 10: 30  \n");
    }
    else if(istd == 10)
    {
        printf("your exams at 11: 30");
    }
    else{
        printf("srry we do not have any kind of info about your class");
    }

}

int main()
{
    int iValue1 = 0;

    printf("What is your standrad : \n");
    scanf("%d",&iValue1);

    displaytimetable(iValue1);

    return 0;
}