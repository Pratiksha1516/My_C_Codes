#include<stdio.h>

int main()
{
    int no = 13;

    int *iptr = &no;

    printf("%d\n",no);
    printf("%d\n",&no);
    printf("%d\n",sizeof(no));

    return 0;
}