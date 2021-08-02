#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *cBooks[] = {
        "<C Programming Language>",
        "<C Professional Programming>",
        "<C and Pointers>",
        "<C: Traps and Pitfalls>",
        "<C Primer Plus>",
        "<Learn C with FishC!>"
    };

    char **byFishC;
    char **jiayuLoves[4];

    byFishC = &cBooks[5];
    jiayuLoves[0] = &cBooks[0];
    jiayuLoves[1] = &cBooks[1];
    jiayuLoves[2] = &cBooks[2];
    jiayuLoves[3] = &cBooks[3];

    printf("Published by FishC: %s\n", *byFishC);
    printf("JiaYu's favorite books: \n");

    int i;

    for (i = 0; i < 4; i++)
    {
        printf("%s\n", *jiayuLoves[i]);
    }

    return 0;
}
