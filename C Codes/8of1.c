#include<stdio.h>

int Display(int iNumber)
{
    int icount = 0;
    for(icount = 1; icount <= iNumber; icount++)
    {
        printf("Prati....\n");
    }
}
// iteration approach
int main()
{

    int iFrequency = 0;
    printf("Enter a Frequency:  \n");
    scanf("%d",&iFrequency);
    Display(iFrequency);

    return 0;

}