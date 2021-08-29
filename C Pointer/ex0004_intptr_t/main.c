#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main(void)
{
    int num;
    intptr_t* pi = &num;
    printf("The address of pi = %p\n", pi);

    unsigned unum;
    uintptr_t* pu = &unum;
    printf("The address of pu = %p\n", pu);

    return EXIT_SUCCESS;
}
