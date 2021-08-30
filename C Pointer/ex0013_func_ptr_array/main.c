#include <stdio.h>
#include <stdlib.h>

typedef int (*Operation)(int, int);

int main(void)
{
    Operation operations[128] = { NULL };

    return EXIT_SUCCESS;
}
