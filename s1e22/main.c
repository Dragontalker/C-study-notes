#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *str = "I love FichC.com!";
    int i, length;

    length = strlen(str);

    for (i = 0; i < length; i++)
    {
        printf("%c", str[i]);
    }
    printf("\n");

    return 0;
}
