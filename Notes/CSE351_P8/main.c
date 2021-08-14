#include <stdio.h>
#include <stdlib.h>

void show_bytes(char*, int);

int main(void)
{
    char test[] = "Hello world!";

    show_bytes(test, 14);

    return EXIT_SUCCESS;
}

void show_bytes(char* start, int len) {

    for (int i = 0; i < len; i++) {

        printf("%p\t0x%.2x\n", start + i, *(start + i));
    }

    printf("\n");
}
