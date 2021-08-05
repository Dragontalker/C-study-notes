/*
 * Name: numdigit.c
 * Purpose: Calculates the number of digits in an integer.
 * Author: Richard T. Yang
 */
#include <stdio.h>

int main(void)
{
    int n;
    printf("Please enter a non-negative integer: ");
    scanf("%d", &n);

    int digits = 0;
    do {
        n /= 10;
        digits++;
    } while (n > 0);

    printf("This number has %d digits.\n", digits);

    return 0;
}
