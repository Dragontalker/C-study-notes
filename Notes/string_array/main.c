#include <stdio.h>
#include <stdlib.h>

void foo(char*);

int main()
{
    foo("ABCD EFGH");

    return 0;
}

void foo(char* a)
{
    if (*(a) && *(a) != ' ')
    {
        foo(a+1);
        putchar(*(a));
    }
}
