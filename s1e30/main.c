#include <stdio.h>

int add(int, int);
int sub(int, int);
int calculation(int (*fp)(int, int), int, int);

int add(int num1, int num2)
{
    return num1 + num2;
}

int sub(int num1, int num2)
{
    return num1 - num2;
}

int calculation(int (*fp)(int, int), int num1, int num2)
{
    return (*fp)(num1, num2);
}

int main()
{
    printf("3 + 5 = %d\n", calculation(add, 3, 5));
    printf("3 - 5 = %d\n", calculation(sub, 3, 5));

    return 0;
}
