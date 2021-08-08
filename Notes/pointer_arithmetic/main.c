#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[] = {1, 2, 3, 4, 5, 6, 7};

    int* p = &a[2];

    printf("Address of a[4] = %p\n", &a[4]);
    printf("Address of p + 2 = %p\n", p + 2);

    return 0;
}
