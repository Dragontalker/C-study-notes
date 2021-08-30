#include <stdio.h>
#include <stdlib.h>

typedef int (*fptrOperation)(int);

int add(int, int);
int substract(int, int);

int main(void) {

    fptrOperation fptr1 = add;

    if (fptr1 == add) {
        printf("fptr1 points to add function\n");
    } else {
        printf("fptr1 does not point to add function\n");
    }

    return EXIT_SUCCESS;
}

int add(int num1, int num2) {
    return num1 + num2;
}

int subtract(int num1, int num2) {
    return num1 - num2;
}
