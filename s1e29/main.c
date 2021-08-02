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

void get_array(int a[10]);

void get_array(int a[])
{
    int i;

    for (i = 0; i < 10; i++) {
        printf("a[%d] = %d\n", i, a[i]);
    }
}

int main()
{
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};

    get_array(a);

    return 0;
}
