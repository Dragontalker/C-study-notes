#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int matrix[2][5] = {{1, 2, 3, 4, 5}, {6, 7, 8, 9, 10}};

    for(unsigned i = 0; i < 2; i++)
    {
        for(unsigned j = 0; j < 5; j++)
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

    return EXIT_SUCCESS;
}
