#include <stdio.h>
#include <stdlib.h>

int puts_manually(char const s[static 1]);

int main(void)
{
    puts_manually("Hello world!");

    return EXIT_SUCCESS;
}

int puts_manually(char const s[static 1]) {

    for (size_t i = 0; s[i]; i++) {
        if (putchar(s[i]) == EOF) {
            return EOF;
        }
    }

    if (putchar('\n') == EOF) {
        return EOF;
    }

    return 0;
}
