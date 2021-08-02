#include <stdio.h>
#include <stdlib.h>

void swap(int*, int*);

void swap(int *x, int *y)
{
    int temp;

    printf("In swap(), before swapping: x = %d, y = %d\n", *x, *y);

    temp = *x;
    *x = *y;
    *y = temp;

    printf("In swap(), after swapping: x = %d, y = %d\n", *x, *y);
}

int main()
{
    int x = 3, y = 5;

    printf("In main(), before swapping: x = %d, y = %d\n", x, y);

    swap(&x, &y);

    printf("In main(), after swapping: x = %d, y = %d\n", x, y);

    return 0;
}
