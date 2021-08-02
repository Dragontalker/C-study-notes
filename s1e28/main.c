#include <stdio.h>
#include <stdlib.h>

void print_c();

int sum(int n);

int main()
{
    int n, result;

    printf("Please enter the value of n: ");
    scanf("%d", &n);

    result = sum(n);

    printf("1+2+3+...+(n-1)+n = %d\n", result);

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
