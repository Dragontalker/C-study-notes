#include <stdio.h>
#include <stdlib.h>

int add(int, int);
int subtract(int, int);

typedef int (*fptrOperation)(int, int);
int compute(fptrOperation, int, int);

int main(void)
{
    printf("%d\n", compute(add, 5, 6));
    printf("%d\n", compute(subtract, 5, 6));

    return EXIT_SUCCESS;
}

int add(int num1, int num2) {
    return num1 + num2;
}

int subtract(int num1, int num2) {
    return num1 - num2;
}

int compute(fptrOperation operation, int num1, int num2) {
    return operation(num1, num2);
}
