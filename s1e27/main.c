#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num = 520;
    const int cnum = 880;
    int * const p = &num;

    printf("num: %d, &num: %p\n", num, &num);
    printf("*pc: %d, pc: %p\n", *p, p);

    return 0;
}
