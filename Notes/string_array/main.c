#include <stdio.h>
#include <stdlib.h>

int main()
{
    char p[20];
    char* s = "string";

    int length = strlen(s); //6
    for (int i = 0; i < length; i++)
        p[i] = s[length - i - 1];
    p[length] = '\0';

    printf("%s", p);

    return 0;
}
