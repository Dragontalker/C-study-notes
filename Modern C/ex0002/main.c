#include <stdio.h>
#include <stdlib.h>

#define N 3

typedef const char* String;

int main(void) {

    String const bird[N] = {"raven","magpie","jay"};
    String const pronoun[N] = {"we", "you", "they"};
    String const ordinal[N] = {"first", "second", "third"};

    for (unsigned i = 0; i < N; i++) {
        printf("Corvid #%u is the %s.\n", i+1, bird[i]);
    }

    for (unsigned i = 0; i < N; i++) {
        printf("The %s plural pronoun is %s.\n", ordinal[i], pronoun[i]);
    }

    return EXIT_SUCCESS;
}
