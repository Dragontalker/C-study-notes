#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i;

    printf("Please enter number of character: ");
    scanf("%d", &n);

    char a[n];

    printf("Please enter character: ");
    for (int i = 0; i < n; i++) {
        scanf("%c", &a[i]);
    }

    return 0;
}
