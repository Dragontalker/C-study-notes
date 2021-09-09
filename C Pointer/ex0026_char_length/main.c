#include <stdio.h>
#include <stdlib.h>

int main(void) {
    printf("%u\n", sizeof(char)); // 1
    printf("%u\n", sizeof('a')); // 4 bc C treats char as int
    return EXIT_SUCCESS;
}
