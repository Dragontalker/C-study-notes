#include <stdio.h>

void hanoi(int, char, char, char);

void hanoi(int n, char x, char y, char z)
{
    if (n == 1)
    {
        printf("%c --> %c\n", x, z);
    }
    else
    {
        hanoi(n - 1, x, z, y);
        printf("%c --> %c\n", x, z);
        hanoi(n - 1, y, x, z);
    }
}

int main(void)
{
    int n;

    printf("Please enter the number of stacks on Hanoi: ");
    scanf("%d", &n);

    hanoi(n, 'X', 'Y', 'Z');

    return 0;
}
