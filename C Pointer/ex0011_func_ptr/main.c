#include <stdio.h>
#include <stdlib.h>

int square(int);

int (*fptr1)(int);

int main(void)
{
    int n = 5;
    fptr1 = square;

    printf("%d squared is %d\n", n, fptr1(n));

    return EXIT_SUCCESS;
}

int square(int num) {
    return num * num;
}
