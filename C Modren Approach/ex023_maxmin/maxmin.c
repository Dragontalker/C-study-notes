/*
 * Name: maxmin.c
 * Purpose: Finds the largest and smallest elements in an array.
 * Author: Richard T. Yang
 */
#include <stdio.h>

#define N 10

/* prototype */
void max_min(int [], int, int *, int *)

int main(void)
{
    int b[N], big, small;

    printf("Enter %d numbers: ", N);

    for (int i = 0; i < N; i++) {
        scanf("%d", &b[i]);
    }

    max_min(b, N, &big, &small);

    printf("Largest: %d\n", big);
    printf("Smallest: %d\n", small);

    return 0;
}
