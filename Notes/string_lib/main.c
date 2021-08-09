#include <stdio.h>
#include <string.h>

int main(void)
{
    char str1[10] = "Hello";
    char str2[10];

    printf("%s\n", strcpy(str2, str1));
    printf("%s\n", str2);

    return 0;
}
