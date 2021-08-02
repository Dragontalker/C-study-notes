#include <stdio.h>
#include <stdlib.h>

void print_c();

int sum(int n);

int max(int, int);

int main()
{
    int a, b, c;

    printf("Please enter two integers: ");
    scanf("%d%d", &a, &b);

    c = max(a, b);

    printf("The max number of these two is: %d\n", c);

    return 0;
}

void print_c()
{
    printf(" ###### \n");
    printf("##    ##\n");
    printf("##      \n");
    printf("##      \n");
    printf("##      \n");
    printf("##    ##\n");
    printf(" ###### \n");
}

int sum(int n)
{
    int result = 0;

    do
    {
        result += n;
    } while (n-- > 0);

    return result;
}

int max(int x, int y)
{
    if (x > y)
        return x;
    else
        return y;
}
