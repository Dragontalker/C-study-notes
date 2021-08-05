/*
 * Name: prime.c
 * Purpose: Tests whether a number is prime.
 * Author: Richard T. Yang
 */
#include <stdbool.h>
#include <stdio.h>

bool is_prime(int n) {

    if (n <= 1) {
        return false;
    }

    for (int divisor = 2; divisor * divisor <= n; divisor++) {
        if (n % divisor == 0) {
            return false;
        }
    }

    return true;
}

int main(void)
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (is_prime(n)) {
        printf("Is a prime...");
    } else {
        printf("Not a prime...");
    }

    return 0;
}
