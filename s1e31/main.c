#include <stdio.h>

void a();
void b();
void c();

int count = 0;

void a()
{
    count++;
}

void b()
{
    count++;
}

void c()
{
    count++;
}

int main()
{
    a();
    b();
    c();
    b();

    printf("The total count is now: %d\n", count);

    return 0;
}
