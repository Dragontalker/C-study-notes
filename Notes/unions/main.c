#include <stdio.h>
#include <stdlib.h>

union abc {
    int a;
    char b;
} var;

int main()
{
    var.a = 65;
    printf("a = %d\n", var.a);
    printf("b = %c\n", var.b);

    var.b = 'B';
    printf("a = %d\n", var.a);
    printf("b = %c\n", var.b);
    return 0;
}
