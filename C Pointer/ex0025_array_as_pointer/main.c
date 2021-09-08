#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int (*(arr1[])) = {
        (int[]) {1, 2, 3},
        (int[]) {3, 4, 5},
        (int[]) {6, 7, 8}};

    for(unsigned j = 0; j < 3; j++)
    {
        for(unsigned i = 0; i < 3; i++)
        {
            printf("arr1[%d][%d] Address: %p Value %d\n",
                   j,
                   i,
                   &arr1[j][i],
                   arr1[j][i]);
        }
        printf("\n");
    }

    return EXIT_SUCCESS;
}
