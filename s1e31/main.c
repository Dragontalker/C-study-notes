#include <stdio.h>

void func();

int a, b = 520;

void func()
{
    int b;
    a = 886;
    b = 120;

    printf("In func(), a = %d, b = %d\n", a, b);
}

int main()
{
    printf("In main(), before func(), a = %d, b = %d\n", a, b);
    func();
    printf("In main(), after func(), a = %d, b = %d\n", a, b);

    return 0;
}
