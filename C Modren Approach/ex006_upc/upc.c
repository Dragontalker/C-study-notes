/*
 * Name: upc.c
 * Purpose: Computes a Universal Product Code check digit.
 * Author: Richard T. Yang
 */
#include <stdio.h>

int main(void)
{
    int d;
    printf("Please enter the first (single) digit: ");
    scanf("%1d", &d);

    int i1, i2, i3, i4, i5;
    printf("Please enter the first group of five digits: ");
    scanf("%1d%1d%1d%1d%1d", &i1, &i2, &i3, &i4, &i5);

    int j1, j2, j3, j4, j5;
    printf("Please enter the second group of five digits: ");
    scanf("%1d%1d%1d%1d%1d", &j1, &j2, &j3, &j4, &j5);

    int first_sum = d + i2 + i4 + j1 + j3 + j5;
    int second_sum = i1 + i3 + i5 + j2 + j4;
    int total = 3 * first_sum + second_sum;
    int check = 9 - ((total - 1) % 10);

    printf("Check digits: %d\n", check);

    return 0;
}
