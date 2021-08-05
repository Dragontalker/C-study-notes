/*
 * Name: repdigit.c
 * Purpose: Check numbers for repeated digits.
 * Author: Richard T. Yang
 */
#include <stdbool.h>
#include <stdio.h>

int main(void)
{
    long n;
    printf("Please enter a number: ");
    scanf("%ld", &n);

    bool digit_seen[10] = {false};

    int digit;

    while (n > 0) {

        digit = n % 10;

        if (digit_seen[digit]) {
            break;
        }

        digit_seen[digit] = true;
        n /= 10;
    }

    if (n > 0) {
        printf("Repeated digit...\n");
    } else {
        printf("No repeated digit...\n");
    }

    return 0;
}
