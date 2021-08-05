/*
 * Name: square.c
 * Purpose: Prints a table of squares using a while statement.
 * Author: Richard T. Yang
 */
#include <stdio.h>

int main(void)
{
    printf("This program prints a table of squares.\n");

    int n;
    printf("Enter the number of entries in table: ");
    scanf("%d", &n);

    int i = 1;

    if (n < i) {
        n = i;
    }

    while (i <= n) {
        printf("%10d%10d\n", i , i * i);
        i++;
    }

    return 0;
}
