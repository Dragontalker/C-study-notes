#include <stdio.h>

void fun(int*);

int main(void)
{
    const int i = 10;

    printf("i = %d\n", i);
    printf("address of i = %p\n", &i);

    fun(&i);

    printf("i is now: %d\n", i);
    printf("address of i = %p\n", &i);

    return 0;
}

void fun(int* p)
{
    *(p) = 0;
}
