/*
 * Name: addfrac.c
 * Purpose: Add two fractions.
 * Author: Richard T. Yang
 */
#include <stdio.h>

int main(void)
{
    int num1, denom1;

    printf("Please enter the first fraction: ");
    scanf("%d/%d", &num1, &denom1);

    int num2, denom2;

    printf("Please enter the second fraction: ");
    scanf("%d/%d", &num2, &denom2);

    int result_num = num1 * denom2 + num2 * denom1;
    int result_denom = denom1 * denom2;

    printf("The sum is %d/%d.\n", result_num, result_denom);

    return 0;
}

