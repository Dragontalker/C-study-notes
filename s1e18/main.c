#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i;

    printf("Please enter number of character: ");
    scanf("%d", &n);

    char a[n + 1];

    printf("Please enter your characters: ");
    getchar();
    for (int i = 0; i < n; i++)
    {
        scanf("%c", &a[i]);
    }

    a[n] = '\0';

    printf("The string you entred is: %s", a);

    return 0;
}
