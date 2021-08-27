#include <stdio.h>
#include <stdlib.h>

#define N 3

int main(void) {

    const char* const bird[N] = {"raven","magpie","jay"};
    const char* const pronoun[N] = {"we", "you", "they"};
    const char* const ordinal[N] = {"first", "second", "third"};

    for (unsigned i = 0; i < N; i++) {
        printf("Corvid #%u is the %s.\n", i+1, bird[i]);
    }

    for (unsigned i = 0; i < N; i++) {
        printf("The %s plural pronoun is %s.\n", ordinal[i], pronoun[i]);
    }

    return EXIT_SUCCESS;
}
