/*
 * Name: reverse.c
 * Purpose: Reverse a series a numbers.
 * Author: Richard T. Yang
 */
#include <stdio.h>

#define N 10

int main(void)
{
    int a[N];

    printf("Enter %d numbers: ", N);

    for (int i = 0; i < N; i++) {
        scanf("%d", &a[i]);
    }

    printf("In reverse order: ");

    for (int i = N - 1; i >= 0; i--) {
        printf(" %d", a[i]);
    }
    printf("\n");

    return 0;
}
