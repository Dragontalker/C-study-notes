#include <stdio.h>
#include <stdlib.h>

void swap(int*, int*);
void swap_long(long*, long*);

int main()
{
    int a = 3;
    int b = 4;

    printf("Before swap, a = %d, b = %d\n", a, b);

    swap(&a, &b);

    printf("After swap, a = %d, b = %d\n", a, b);

    long c = 3l;
    long d = 4l;

    printf("Before swap_long, c = %ld, d = %ld\n", c, d);

    swap_long(&c, &d);

    printf("After swap_long, c = %ld, d = %ld\n", c, d);

    return 0;
}

void swap(int* xp, int* yp)
{
    int t0 = *(xp);
    int t1 = *(yp);
    *(xp) = t1;
    *(yp) = t0;
}

void swap_long(long* xp, long* yp)
{
    long t0 = *(xp);
    long t1 = *(yp);
    *(xp) = t1;
    *(yp) = t0;
}
