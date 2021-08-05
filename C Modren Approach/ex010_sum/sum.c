/*
 * Name: sum.c
 * Purpose: Sums a series of numbers.
 * Author: Richard T. Yang
 */
#include <stdio.h>

int main(void)
{
    printf("This program sums a series of integers.\n");

    int n;
    printf("Please enter integers (0 to terminate): ");
    scanf("%d", &n);

    int sum = 0;
    while (n != 0) {
        sum += n;
        scanf("%d", &n);
    }

    printf("The sum is: %d\n.", sum);

    return 0;
}
