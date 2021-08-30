#include <stdio.h>
#include <stdlib.h>

typedef int (*fptrOperation)(int, int);

int add(int, int);
int subtract(int, int);
void initializeOperationsArray(fptrOperation*);
int evaluateArray(char, int, int, fptrOperation*);

int main(void)
{
    fptrOperation operations[128] = { NULL };
    initializeOperationsArray(operations);

    printf("%d\n", evaluateArray('+', 5, 6, operations));
    printf("%d\n", evaluateArray('-', 5, 6, operations));

    return EXIT_SUCCESS;
}

void initializeOperationsArray(fptrOperation* operations) {
    operations['+'] = add;
    operations['-'] = subtract;
}

int evaluateArray(char opcode, int num1, int num2, fptrOperation* operations) {
    fptrOperation operation;
    operation = operations[opcode];
    return operation(num1, num2);
}
