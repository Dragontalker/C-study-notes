#include <stdio.h>
#include <stdlib.h>

int main()
{
    int array[4][5] = {0};

    printf("sizeof int: %d\n", sizeof(int));
    printf("address of array: %p\n", array);
    printf("array = 1: %p\n", array + 1);

    return 0;
}
