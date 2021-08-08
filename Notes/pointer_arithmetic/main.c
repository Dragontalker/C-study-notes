#include <stdio.h>
#include <stdlib.h>

#define N 5

int main()
{
    int a[N];

    int* p;

    printf("Enter %d elements in the array: \n", N);

    for (p = a; p < a + N; p++) {
        scanf("%d", p);
    }

    printf("\nElements in reverse order: \n");

    for (p = a + N - 1; p >= a; p--) {
        printf(" %d", *(p));
    }

    printf("\n");

    return 0;
}
