#include <stdio.h>
#include <string.h>

int main(void)
{
    char str1[100], str2[100];

    strcpy(str1, "Welcome to ");
    strcpy(str2, "our Academy");

    printf("The address of str1 = %p\n", str1);

    strcat(str1, str2);

    printf("The address of str1 = %p\n", str1);

    printf("%s", str1);

    return 0;
}
