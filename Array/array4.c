#include<stdio.h>

int main()
{
    int Arr[4] = {45, 55, 65, 75};

    printf("%d\n",Arr[0]);
    printf("%d\n",Arr[1]);
    printf("%d\n",Arr[2]);
    printf("%d\n",Arr[3]);

    printf("%d\n",sizeof(Arr));     // size of an array
    printf("%d\n",&Arr[3]);         // 4th element's base address

    return 0;
}