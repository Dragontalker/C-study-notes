#include <stdio.h>
#include <stdlib.h>

int main(void) {

    size_t sizet = -5;

    printf("%d\n", sizet);
    printf("%u\n", sizet);

    sizet = 5;

    printf("%d\n", sizet);
    printf("%u\n", sizet);

    return EXIT_SUCCESS;
}
