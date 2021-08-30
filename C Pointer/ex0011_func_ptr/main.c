#include <stdio.h>
#include <stdlib.h>

typedef int (*Func_ptr)(int);

int square(int);

int main(void)
{
    int n = 5;

    Func_ptr fptr1;
    fptr1 = square;

    printf("%d squared is %d\n", n, fptr1(n));

    return EXIT_SUCCESS;
}

int square(int num) {
    return num * num;
}
