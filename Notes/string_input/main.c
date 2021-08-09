#include <stdio.h>

int input(char [], int);

int main(void)
{
    char str[100];

    int n = input(str, 5);

    printf("The sizeof(string) = %d, the printed out result = %s\n", n, str);

    return 0;
}

int input(char str[], int n)
{
    int ch, i = 0;
    while((ch = getchar()) != '\n')
    {
        if (i < n)
        {
            str[i++] = ch;
        }
    }
    str[i] = '\0';
    return i;
}
