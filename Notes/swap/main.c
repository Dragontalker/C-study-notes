#include <stdio.h>
#include <stdlib.h>

void swap(int*, int*);

int main()
{
    int a = 3;
    int b = 4;

    printf("Before swap, a = %d, b = %d\n", a, b);

    swap(&a, &b);

    printf("After swap, a = %d, b = %d\n", a, b);

    return 0;
}

void swap(int* xp, int* yp)
{
    int t0 = *(xp);
    int t1 = *(yp);
    *(xp) = t1;
    *(yp) = t0;
}
