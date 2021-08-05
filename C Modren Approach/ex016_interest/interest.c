/*
 * Name: interest.c
 * Purpose: Prints a table of compound interest.
 * Author: Richard T. Yang
 */
#include <stdio.h>

#define NUM_RATES ((int)(sizeof(value) / sizeof(value[0])))
#define INITIAL_BALANCE 100.00
#define NUM_PERIODS 5

int main(void)
{
    int low_rate;
    printf("Please enter the interest rate: ");
    scanf("%d", &low_rate);

    int num_years;
    printf("Please enter the number of years: ");
    scanf("%d", &num_years);

    double value[NUM_PERIODS];
    printf("\nYears");

    for (int i = 0; i < NUM_RATES; i++) {

        printf("%6d%%", low_rate + i);
        value[i] = INITIAL_BALANCE;
    }
    printf("\n");

    for (int year = 1; year <= num_years; year++) {

        printf("%3d    ", year);
        for (int i = 0; i < NUM_RATES; i++) {

            value[i] *= (low_rate + i) / 100.0 + 1;
            printf("%7.2f", value[i]);
        }
        printf("\n");
    }

    return 0;
}
