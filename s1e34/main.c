#include <stdio.h>
#include <stdlib.h>

void recursion(void);

void recursion(void)
{
    static int count = 10;

    printf("#%d\n", count);
    printf("Hi!\n");

    if (--count)
    {
        recursion();
    }
}

int main(void)
{
    recursion();

    return 0;
}
