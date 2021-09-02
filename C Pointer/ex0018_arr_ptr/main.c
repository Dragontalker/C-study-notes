#include <stdio.h>
#include <stdlib.h>

#define N 5
int main(void)
{
    int vector[N] = { 12, 34, 56, 78, 100 };

    int* pv = (int*) malloc(5 * sizeof(int));

    for (int i = 0; i < N; i++) {
        *(pv + i) = vector[i];
    }

    for (int i = 0; i < N; i++) {
        printf("#%d element in pv = %d\n", i, *(pv + i));
    }

    free(pv);

    return EXIT_SUCCESS;
}
