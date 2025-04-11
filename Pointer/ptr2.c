#include<stdio.h>

int main()
{
    char c = 'P';
    int i  = 11;
    float f = 3.14;
    double d = 56.946739;

    char *cptr = &c;
    int *iptr = &i;
    float *fptr = &f;
    double *dptr = &d;

    printf("%d\n",&c);
    printf("%d\n",&i);
    printf("%d\n",&f);
    printf("%d\n",&d);

    return 0;
}
