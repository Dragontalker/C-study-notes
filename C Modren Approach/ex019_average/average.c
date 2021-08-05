/*
 * Name: average.c
 * Purpose: Computes pairwise averages of three numbers.
 * Author: Richard T. Yang
 */
#include <stdio.h>

double average(double, double);

int main()
{
    double x, y, z;
    printf("Enter three numbers: ");
    scanf("%lf%lf%lf", &x, &y, &z);

    printf("Average of %g and %g: %g\n", x, y, average(x, y));
    printf("Average of %g and %g: %g\n", y, z, average(y, z));
    printf("Average of %g and %g: %g\n", x, z, average(x, z));

    return 0;
}

double average(double a, double b)
{
    return (a + b) / 2;
}
