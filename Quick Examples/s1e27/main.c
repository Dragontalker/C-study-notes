#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num = 520;
    const int cnum = 880;
    const int * const p = &cnum;

    printf("cnum: %d, &cnum: %p\n", cnum, &cnum);
    printf("*pc: %d, pc: %p\n", *p, p);

    return 0;
}
