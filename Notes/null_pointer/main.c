#include <stdio.h>
#include <stdlib.h>

int main(void) {

    int* ptr;

    printf("The initial address = %p\n", ptr);
    printf("The size of NULL = %d\n", sizeof(NULL));

    ptr = (int*) malloc(2 * sizeof(int));

    if (ptr == NULL){
        printf("Memory could not be alllocated...");
    } else {
        printf("Memory allocated succesfully!\n");
        printf("The address = %p\n", ptr);
        free(ptr);
    }

    return EXIT_SUCCESS;
}
