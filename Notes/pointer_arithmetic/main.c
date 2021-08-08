#include <stdio.h>

void f(int*, int*);

int i = 0;
int j = 1;

int main()
{
    f(&i, &j);

    printf("%d %d\n", i, j);

    return 0;
}

void f(int* p, int* q)
{
    p = q;
    *(p) = 2;
}


