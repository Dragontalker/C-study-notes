#include <stdio.h>
#include <stdlib.h>

int main()
{
    int score[4][5] = {
        {
            80, 92, 85, 86, 99
        },
        {
            78, 65, 89, 70, 99
        },
        {
            67, 78, 76, 89, 99
        },
        {
            88, 68, 98, 90, 99
        }
    };

    int i, j;

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("%d ", score[j][i]);
        }
        printf("\n");

    }

    return 0;
}
