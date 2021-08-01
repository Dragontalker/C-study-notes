#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str1[] = "Original string";
    char str2[] = "New string";
    char str3[100];

    strcpy(str1, str2);
    strcpy(str3, "Copy successful!");

    printf("str1: %s\n", str1);
    printf("str2: %s\n", str2);
    printf("str3: %s\n", str3);

    return 0;
}
