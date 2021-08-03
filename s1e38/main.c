#include <stdio.h>
#include <stdlib.h>

int main(void) {

    int *ptr = NULL;
    int num, i;

    printf("Please enter how many integers you want to store: ");
    scanf("%d", &num);

    ptr = (int*) malloc(num * sizeof(int));

    for (i = 0; i < num; i++) {
        printf("Please enter integer #%d: ", i + 1);
        scanf("%d", &ptr[i]);
    }

    printf("The integers you entered are: \n");
    for (i = 0; i < num; i++) {
        printf("#%d integer = %d\n", i + 1, ptr[i]);
    }

    free(ptr);

    return 0;
}
