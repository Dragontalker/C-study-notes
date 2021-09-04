#include <stdio.h>
#include <stdlib.h>

char* trim(char*);

int main(void) {
    char* buffer = (char*) malloc(strlen(" cat") + 1);

    strcpy(buffer, " cat");
    printf("%s\n", trim(buffer));

    return EXIT_SUCCESS;
}

char* trim(char* phrase) {
    char* old = phrase;
    char* new = phrase;

    while(*(old) == ' ') {
        old++;
    }

    while(*(old)) {
        *(new++) = *(old++);
    }

    *(new) = 0;

    return (char*) realloc(phrase, strlen(phrase)+1);
}
