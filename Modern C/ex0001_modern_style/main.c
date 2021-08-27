#include <stdio.h>
#include <stdlib.h>

#define N 5

int main(void) {

    double A[N] = {
        [0] = 9.0,
        [1] = 2.9,
        [4] = 3.E+25,
        [3] = .00007,
    };

    for (size_t i = 0; i < N; i++) {
        printf("element %zu is %g, \t", i, A[i]);
        printf("its square is %g\n", A[i]*A[i]);
    }

    return EXIT_SUCCESS;
}
