#include<stdio.h>

int main()
{

    int iNo = 123456;
    int iDigit = 0;
    
   while(iNo > 0)              // if we don't apply while loop then it will display only 6 means it will travel through the code only once  
    {
        iDigit = iNo % 10;
        printf("%d\n",iDigit);  // iDigit will hold the sinngle single values as loop itarates
        iNo = iNo /10;          //if we divide number with 100 then it's displaying 6, 4, 2 numbers only so to dispay each of the number we divided given number by 10

    }

    return 0;
}