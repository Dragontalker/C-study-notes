#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

size_t gcd2(size_t, size_t);
size_t gcd(size_t, size_t);

int main(void) {

    printf("The gcd of 18 and 30 = %zu\n", gcd(18, 30));

    return EXIT_SUCCESS;
}

size_t gcd2(size_t a, size_t b) {

    if (!a) {
        return b;
    }

    size_t rem = b % a;

    return gcd(rem, a);
}

size_t gcd(size_t a, size_t b) {

    if (a < b) {
        return gcd2(a, b);
    } else {
        return gcd2(b, a);
    }
}
