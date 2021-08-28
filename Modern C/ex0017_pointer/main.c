#include <stdio.h>
#include <stdlib.h>

double blub(const double*, double*);

int main(void)
{
    double c = 35;
    double d = 3.6;

    printf("blub is %g\n", blub(&c, &d));
    printf("after blub the sum is %g\n", c + d);

    return EXIT_SUCCESS;
}

double blub(const double* a, double* b) {

    double myA = *(a);

    *(b) = 2 * myA;

    return *(a);
}
