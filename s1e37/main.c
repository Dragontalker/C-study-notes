#include <stdio.h>
#include <stdlib.h>


int main(void) {

    int *ptr;

    ptr = (int*) malloc(sizeof(int));

    if (ptr == NULL) {
        printf("Memory allocation failed...");
        return;
    }

    printf("Please enter an integer: ");
    scanf("%d", ptr);

    printf("The integer you entered is: %d\n", *ptr);

    return 0;
}
