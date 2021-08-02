#include <stdio.h>

void func();

void func()
{
    extern count;
    count++;
}

int count;

int main()
{
    func();

    printf("Count = %d\n", count);

    return 0;
}
