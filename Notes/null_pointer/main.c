#include <stdio.h>
#include <stdlib.h>

int main(void) {

    int n;
    printf("Enter the number of integers: ");
    scanf("%d", &n);

    int* ptr = (int*) malloc(n * sizeof(int));

    if (ptr == NULL) {
        printf("Memory not available.");
        exit(1);
    }

    for (int i = 0; i < n; i++) {
        printf("Enter an integer: ");
        scanf("%d", ptr + i);
    }

    for (int i = 0; i < n; i++) {
        printf("%d ", *(ptr + i));
    }

    return EXIT_SUCCESS;
}
