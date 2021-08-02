#include <stdio.h>

void func(void);

int main(void)
{
    func();

    extern count;
    count++;

    printf("In main(), count = %d\n", count);

    return 0;
}

int count;

void func(void)
{
    count++;
    printf("In func(), count = %d\n", count);
}
