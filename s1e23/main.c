#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[] = "I love FishC.com!";
    char *target = str;
    int count = 0;

    while (*target++ !='\0')
    {
        count++;
    }

    printf("There are %d characters in total.", count);

    return 0;
}
