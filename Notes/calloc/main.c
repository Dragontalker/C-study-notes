#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int* ptr = (int*) malloc(sizeof(int));

    printf("The address of ptr = %p\n", ptr);

    ptr = (int*) realloc(ptr, 2 * sizeof(int));

    printf("The address of ptr = %p\n", ptr);

    return EXIT_SUCCESS;
}
