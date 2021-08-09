#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n = 10;
    void* ptr = &n;

    printf("%d", *(int*)ptr);

    return EXIT_SUCCESS;
}
