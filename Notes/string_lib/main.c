#include <stdio.h>
#include <string.h>

int main(void)
{
    char str1[15], str2[100];

    strcpy(str1, "Welcome to ");
    strcpy(str2, "our Academy");

    printf("The address of str1 = %p\n", str1);

    strncat(str1, str2, sizeof(str1) - strlen(str1) - 1);

    printf("The address of str1 = %p\n", str1);

    printf("%s", str1);

    return 0;
}
