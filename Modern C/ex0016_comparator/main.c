#include <stdio.h>
#include <stdlib.h>

int compare_unsigned(const void*, const void*);

int main(void)
{

    return EXIT_SUCCESS;
}

int compare_unsigned(const void* a, const void* b) {

    const unsigned* A = a;
    const unsigned* B = b;

    if (*(A) < *(B)) {
        return -1;
    } else if (*(A) > *(B)) {
        return +1;
    } else {
        return 0;
    }
}
