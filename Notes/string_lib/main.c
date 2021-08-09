#include <stdio.h>
#include <string.h>

int main(void)
{
    char* str1 = "Hello World";
    char str2[] = "Hello World";
    char str3[100] = "Hello World";

    printf("The length = %d\n", strlen(str1));
    printf("The length = %d\n", strlen(str2));
    printf("The length = %d\n", strlen(str3));

    return 0;
}
