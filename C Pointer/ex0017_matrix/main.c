#include <stdio.h>
#include <stdlib.h>

#define M 2
#define N 3

int main(void)
{
    int matrix[M][N] = { { 1, 2, 3}, { 4, 5, 6 } };

    for (unsigned i = 0; i < M; i++)
    {
        printf(
           "&matrix[%d]: %p, sizeof(matrix[%d]): %d\n",
           i,
           &matrix[i],
           i,
           sizeof(matrix[i])
        );
    }

    return EXIT_SUCCESS;
}
