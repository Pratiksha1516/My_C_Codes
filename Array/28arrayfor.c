#include<stdio.h>

int main()
{
    int Arr[6] = { 10, 20, 30, 40, 50, 60}; // array of type int 
    int iCount = 0;                         // local variable to store the array elements

    for(iCount = 0; iCount <= 5; iCount++)
    {
        printf("%d\n",Arr[iCount]);     //here we took Arr[iCount] coz we want to display the numbers present inside the array, if i wrote only iCount then it will display the index numbers those are 0 1 2 3 4 5 6

    }


    return 0;
}