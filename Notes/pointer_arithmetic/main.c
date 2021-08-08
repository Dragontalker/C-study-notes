#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[] = {11, 22, 36, 5, 2};

    int sum = 0;

    int len = sizeof(a) / sizeof(a[0]);

    int* p;

    for (p = a; p < p + len; p++) {
        sum += *(p);
    }

    printf("Sum is %d", sum);

    return 0;
}
