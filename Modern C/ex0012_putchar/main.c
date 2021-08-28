#include <stdio.h>
#include <stdlib.h>

typedef const char* String;

int puts_manually(String);

int main(void)
{
    puts_manually("Hello world!");

    return EXIT_SUCCESS;
}

int puts_manually(String str) {

    for (size_t i = 0; *(str + i); i++) {
        if (putchar(*(str + i)) == EOF) {
            return EOF;
        }
    }

    if (putchar('\n') == EOF) {
        return EOF;
    }

    return EXIT_SUCCESS;
}
