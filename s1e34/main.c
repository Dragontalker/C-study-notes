#include <stdio.h>

long fact(int);

long fact(int num)
{
    long result;

    for (result = 1; num > 1; num--)
    {
        result *= num;
    }

    return result;
}


int main(void)
{
    int num;

    printf("Please enter a positive integer: ");
    scanf("%d", &num);

    printf("The factorial of %d = %d\n", num, fact(num));

    return 0;
}
