#include <stdio.h>
#include <string.h>

int main(void)
{
    char str1[10] = "Hello";
    char str2[6];
    char str3[10];

    printf("%s\n", strncpy(str2, str1, sizeof(str2)));
    printf("%s\n", strcpy(str3, strcpy(str2, str1)));
    printf("%s\n", str2);

    return 0;
}
