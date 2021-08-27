#include <stdio.h>
#include <stdlib.h>

void swap_double(double [static 2]);

int main(void) {

    double A[2] = { 1.0, 2.0 };

    printf("Before swapping, \n");
    printf("A[0] = %g\n", A[0]);
    printf("A[1] = %g\n", A[1]);

    swap_double(A);

    printf("After swapping, \n");
    printf("A[0] = %g\n", A[0]);
    printf("A[1] = %g\n", A[1]);

    return EXIT_SUCCESS;
}

void swap_double(double a[static 2]) {

    double temp = a[0];
    a[0] = a[1];
    a[1] = temp;
}
