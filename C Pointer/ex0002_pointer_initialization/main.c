#include <stdio.h>
#include <stdlib.h>

int* global_pi;

void foo() {
    static int* static_pi;

    if (static_pi == NULL) {
        printf("The value of static_pi = NULL\n");
    } else {
        printf("The value of static_pi != NULL\n");
    }
}

int main(void)
{
    if (global_pi == NULL) {
        printf("The value of global_pi = NULL\n");
    } else {
        printf("The value of global_pi != NULL\n");
    }

    foo();

    return EXIT_SUCCESS;
}
