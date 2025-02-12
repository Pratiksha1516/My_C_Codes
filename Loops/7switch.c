#include<stdio.h>

void displaytimetable(int istd)
{       

    switch (istd)
    {
        case 8:
            printf("your exam is at 9 \n");
            break;

        case 9:
            printf("your exam is at 10 \n");
            break;
        case 10:
            printf("your exam is at 11 \n");
            break;
        default:
            printf("srry do not have any info");
        
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