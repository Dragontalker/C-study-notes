#include <stdio.h>

long fact(int);

long fact(int num)
{
    long result;

    if (num > 0)
    {
        result = num * fact(num - 1);
    }
    else
    {
        result = 1;
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
