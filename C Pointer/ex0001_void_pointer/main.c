#include <stdio.h>
#include <stdlib.h>

/* void* has value of NULL*/
/* pointer that pointing to uninitialized value also has value of NULL */
int main(void) {

    int num;
    int* pi = &num;
    printf("Value of pi = %p\n", pi);

    void* pv = pi;
    pi = (int*) pv;
    printf("value of pi = %p\n", pi);

    return EXIT_SUCCESS;
}
