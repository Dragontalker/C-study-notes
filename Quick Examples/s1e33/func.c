#include <stdio.h>

extern int count;

void func(void)
{
    printf("count = %d\n", count);
}
