#include <stdio.h>
#include <stdlib.h>

void delay(double);

int main(int argc, char* argv[argc + 1]) {
    fputs("waiting 10 seconds for you to stop me", stdout);

    if (argc < 3) {
        fflush(stdout);
    }

    for (unsigned i = 0; i < 10; i++) {

        fputs('.', stdout);

        if (argc < 2) {
            fflush(stdout);
        }

        delay(1.0);
    }

    fputs("\n", stdout);
    fputs("You did ignore me, so bye bye\n", stdout);

    return EXIT_SUCCESS;
}

void delay(double secs) {

    const double magic = 4E8;
    const unsigned long long nano = secs * magic;

    for (unsigned long volatile count = 0; count < nano; count++) {

    }
}
