#include <stdio.h>
#include <stdlib.h>

int compare_unsigned(const void*, const void*);

int main(void) {

    int res = compare_unsigned(10, 8);

    printf("The resullt = %d\n", res);

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
