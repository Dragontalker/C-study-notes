#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[] = {1, 2, 3, 4, 5, 6, 7};

    int* p = &a[0];

    printf("Address of a[] = %\p\n", a);
    printf("Address of p = %p\n", p);

    printf("Address of a[3] = %\p\n", &a[3]);
    printf("Address of p + 3 = %p\n", p + 3);

    return 0;
}
