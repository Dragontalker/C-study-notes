#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str1[] = "FishC.com!";
    char str2[] = "FishC.com!";

    if (!strcmp(str1, str2))
    {
        printf("Two strings are exactly the same!");
    }
    else
    {
        printf("There are differences in these two strings!");
    }

    return 0;
}
