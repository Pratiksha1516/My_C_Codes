#include<stdio.h>

int main()
{
  /*int iNo1 = 10;
    int iNo2 = 20;              // rather than wrtting like this we can craete an aarray to store multiple values
    int iNo3 = 30;
    int iNo4 = 40;*/

    int Arr[4] = {10, 20, 30,  40};;     // array of type int currently it holds 4 elements those are 10, 20, 30, 40

   /* printf("%d\n",iNo1);
    printf("%d\n",iNo2);
    printf("%d\n",iNo3);
    printf("%d\n",iNo4);*/

    printf("%d\n", Arr[0]);     // calling 1st elemnt of an array
    printf("%d\n", Arr[1]);
    printf("%d\n", Arr[2]);
    printf("%d\n", Arr[3]);

    return 0;
}