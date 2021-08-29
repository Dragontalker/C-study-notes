#include <stdio.h>
#include <stdlib.h>

int main(void) {

    int num;
    int* pi = &num;
    printf("Address of pi = %p\n", pi);

    if (pi == NULL) {
        printf("Value of pi = NULL\n");
    } else {
        printf("Value of pi != NULL\n");
    }

    void* pv = pi;
    pi = (int*) pv;
    printf("Address of pi = %p\n", pi);

    if (pi == NULL) {
        printf("Value of pi = NULL\n");
    } else {
        printf("Value of pi != NULL\n");
    }

    return EXIT_SUCCESS;
}
