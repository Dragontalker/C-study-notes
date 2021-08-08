#include <stdio.h>

int main()
{
    char a[2][3] = {{'a', 'b', 'c'}, {'d', 'e', 'f'}};
    char b[3][2];

    char* p = *(b);

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            *(p + 2*j + i) = a[i][j];
        }
    }

    printf("Array a: {");
    for (int i = 0; i < 2; i++) {
        printf("{");
        for (int j = 0; j < 3; j++) {
            printf(" %c", a[i][j]);
        }
        printf(" }");
    }
    printf("}\n");

    printf("Array b: {");
    for (int i = 0; i < 3; i++) {
        printf("{");
        for (int j = 0; j < 2; j++) {
            printf(" %c", b[i][j]);
        }
        printf(" }");
    }
    printf("}\n");

    return 0;
}
