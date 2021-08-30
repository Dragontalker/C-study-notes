#include <stdio.h>
#include <stdlib.h>

typedef int (*FuncPtr)(int);

int square(int);

int main(void)
{
    int n = 5;

    FuncPtr fptr1;
    fptr1 = square;

    printf("%d squared is %d\n", n, fptr1(n));

    return EXIT_SUCCESS;
}

int square(int num) {
    return num * num;
}
