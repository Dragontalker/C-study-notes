#include <stdio.h>
#include <stdlib.h>

#define NEW 1
#define NOT 0

int main()
{
    int c, state;

    state = NEW;

    while ((c = getchar()) != EOF) {

        if (c == ' ' || c == '\t') {
            state = NOT;
        }

        if (c == '\n') {
            state = NEW;
        }

        if (state == NEW) {
            putchar(c);
        }
    }
}
