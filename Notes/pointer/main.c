#include <stdio.h>

void fun(const int*);

int main(void)
{
    const int i = 10;

    fun(&i);

    printf("i is now: %d\n", i);

    return 0;
}

void func(const int* p)
{
    *(p) = 0;
}
