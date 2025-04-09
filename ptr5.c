#include<stdio.h>

int main()
{
    int no = 13;

    int *p = &no;
    int *q = &no;

    printf("%d\n",*p);
    printf("%d\n",&no);
    printf("%d\n",&q);
    printf("%d\n",*q);

    return 0;
}
