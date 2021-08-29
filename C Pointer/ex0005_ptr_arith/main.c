#include <stdio.h>
#include <stdlib.h>

int main(void) {

    int vector[] = { 28, 41, 7 };

    int* pi = vector;
    printf("The value of point pi = %p\n", pi);
    printf("The int value pointed by pi = %d\n", *(pi));

    pi += 1;
    printf("The value of point pi = %p\n", pi);
    printf("The int value pointed by pi = %d\n", *(pi));

    pi += 1;
    printf("The value of point pi = %p\n", pi);
    printf("The int value pointed by pi = %d\n", *(pi));

    return EXIT_SUCCESS;
}
