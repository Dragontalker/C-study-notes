#include <stdio.h>
#include <stdlib.h>

void double_swap(double*, double*);

int main(void)
{
    double a = 5.4;
    double b = 3.8;

    printf("Before swap, a = %.1f, b = %.1f\n", a, b);

    double_swap(&a, &b);

    printf("After swap, a = %.1f, b = %.1f\n", a, b);

    return EXIT_SUCCESS;
}

void double_swap(double* p0, double* p1)
{
    double tmp = *(p0);
    *(p0) = *(p1);
    *(p1) = tmp;
}
