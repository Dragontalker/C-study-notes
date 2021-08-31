#include <stdio.h>
#include <stdlib.h>

typedef void (*fptrBase)();
typedef int (*fptrToSingleInt)(int);
typedef int (*fptrToTwoInts)(int, int);

int add(int, int);

int main(void) {

    fptrToTwoInts fptrFirst = add;

    fptrBase basePointer;
    basePointer = (fptrToSingleInt)fptrFirst;

    fptrFirst = (fptrToTwoInts)basePointer;

    printf("%d\n", fptrFirst(5, 6));

    return EXIT_SUCCESS;
}

int add(int num1, int num2) {
    return num1 + num2;
}
