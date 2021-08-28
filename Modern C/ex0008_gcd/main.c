#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

size_t gcd(size_t, size_t);

int main(void) {

    printf("The gcd of 15 and 25 = %zu\n", gcd(15, 25));

    return EXIT_SUCCESS;
}

size_t gcd(size_t a, size_t b) {

    assert(a <= b);

    if (!a) {
        return b;
    }

    size_t rem = b % a;

    return gcd(rem, a);
}
