#include <stdio.h>

int main(void)
{
    int i = 1;

    int* p = &i;

    int* q = p;

    *(q) = 5;

    printf("%d\n", *(p)); // 5?

    return 0;
}
