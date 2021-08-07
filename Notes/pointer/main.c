#include <stdio.h>

int main(void)
{
    int x = 5;

    int* ptr = &x;

    printf("%d\n", *(ptr));

    *(ptr) = 6;

    printf("%d\n", x);

    return 0;
}
