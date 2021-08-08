#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[] = {11, 22, 36, 5, 2};

    int sum = 0;

    int len = sizeof(a) / sizeof(a[0]);

    int* p = &a[0];

    printf("Address of a = %p\n", a);
    printf("Address of &a[i] = %p\n", &a[0]);

    printf("Address of a[4] = %p\n", &a[4]);
    printf("Address of p + 4 = %p\n", p + 4);

    for (p = a; p < a + len ; p++) {
        sum += *(p);
    }

    printf("Sum is %d", sum);

    return 0;
}
