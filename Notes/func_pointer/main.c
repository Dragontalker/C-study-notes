#include <stdio.h>
#include <stdlib.h>

int add(int, int);

int main()
{
    int (*ptr)(int, int) = &add;

    int result = ptr(10, 20);

    printf("%d\n", result);

    return 0;
}

int add(int a, int b)
{
    return a + b;
}
