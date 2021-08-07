#include <stdio.h>

int main(void)
{
    int i = 10;

    int* p = &i;

    int* q = p;

    printf("Value at *p = %d\n", *(p));
    printf("Value at *q = %d\n", *(q));
    printf("Value of i = %d\n", i);

    return 0;
}
