#include <stdio.h>
#include <stdlib.h>

#define L 3
#define M 2
#define N 4

void display3DArray(int (*arr)[M][N], int rows);

int main(void)
{
    int arr3d[L][M][N] = {
        {{1, 2, 3, 4}, {5, 6, 7, 8}},
        {{9, 10, 11, 12}, {13, 14, 15, 16}},
        {{17, 18, 19, 20}, {21, 22, 23, 24}}
    };

    display3DArray(arr3d, L);

    return EXIT_SUCCESS;
}

void display3DArray(int (*arr)[M][N], int rows)
{
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < M; j++)
        {
            printf("{");
            for(int k = 0; k < N; k++)
            {
                printf("%d ", arr[i][j][k]);
            }
            printf("}");
        }
        printf("\n");
    }
}
