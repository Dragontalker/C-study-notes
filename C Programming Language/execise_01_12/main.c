#include <stdio.h>
#include <stdlib.h>

#define NEW 1
#define NOT 0

int main()
{
    int c, state;

    state = NEW;

    while ((c = getchar()) != EOF) {
        putchar(c);
    }
}
