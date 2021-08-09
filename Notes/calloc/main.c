#include <stdio.h>
#include <stdlib.h>

#define N 2

int main(void)
{
    int* ptr = (int*) malloc(N * sizeof(int));

    if (ptr == NULL) {
        printf("Memory not available!");
        exit(1);
    }

    printf("Enter the two numbers: \n");
    for (size_t i = 0; i < N; i++) {
        scanf("%d", ptr + i);
    }

    //Memory allocation for 2 more integers
    ptr = (int*) realloc(ptr, 2 * N * sizeof(int));

    if (ptr == NULL) {
        printf("Memory not available!");
        exit(1);
    }

    printf("Enter the two more numbers: \n");
    for (size_t i = 2; i < 2 * N; i++) {
        scanf("%d", ptr + i);
    }

    for (size_t i = 0; i < 4; i++) {
        printf(" %d", *(ptr + i));
    }

    return EXIT_SUCCESS;
}
