#include <stdio.h>
#include <stdlib.h>

#define M 2
#define N 5

void display2DArray(int[][N], int);
void display2DArrayUnknownSize(int*, int, int);

int main(void)
{
    int matrix[M][N] = {{1, 2, 3, 4, 5}, {6, 7, 8, 9, 10}};

    for(unsigned i = 0; i < M; i++)
    {
        for(unsigned j = 0; j < N; j++)
        {
            printf(
                "matrix[%d][%d] Address: %p Value: %d\n",
                i,
                j,
                &matrix[i][j],
                matrix[i][j]
            );
        }
    }

    int (*pmatrix)[N] = matrix;

    printf("%p\n", pmatrix);
    printf("%p\n", pmatrix + 1);
    printf("%d\n", sizeof(pmatrix[0]));

    printf("%p %d\n", pmatrix[0] + 1, *(pmatrix[0] + 1));

    display2DArray(matrix, M);

    display2DArrayUnknownSize(&matrix[0][0], M, N);

    return EXIT_SUCCESS;
}

void display2DArray(int arr[][N], int rows)
{
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < N; j++)
        {
            printf("[%d] ", arr[i][j]);
        }
        printf("\n");
    }
}

void display2DArrayUnknownSize(int* arr, int rows, int cols)
{
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            printf("[%d] ", *(arr + (i * cols) + j));
        }
        printf("\n");
    }
}
