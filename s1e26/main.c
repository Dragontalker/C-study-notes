#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num = 520;
    int *p = &num;
    int **pp = &p;

    printf("num: %d\n", num);
    printf("*p: %d\n", *p);
    printf("**pp: %d\n", **pp);

    printf("address of p: %p\n", p);
    printf("address of *pp: %p\n", *pp);
    printf("address of num: %p\n", &num);

    return 0;
}
