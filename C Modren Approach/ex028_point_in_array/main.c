#include <stdio.h>
#include <stdlib.h>

double sum0(size_t, double const*);
double sum1(size_t, double const*);

int main(void)
{
    double A[7] = {0, 1, 2, 3, 4, 5, 6};

    double s0_7 = sum0(7, &A[0]);
    double s1_6 = sum0(6, &A[1]);
    double s2_3 = sum0(3, &A[2]);

    return EXIT_SUCCESS;
}

double sum0(size_t len, double const* a)
{
    double ret = 0.0;

    for (size_t i = 0; i < len; i++) {
        ret += *(a + i);
    }

    return ret;
}

double sum1(size_t len, double const* a)
{
    double ret = 0.0;

    for (double const* p = a; p < a + len; p++) {
        ret += *(p);
    }

    return ret;
}
