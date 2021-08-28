#include <stdio.h>
#include <stdlib.h>

void sayGoodBye(void);

int main(void)
{
    atexit(sayGoodBye);

    return EXIT_SUCCESS;
}

void sayGoodBye(void) {

    if (errno) {
        perror("terminating with error condition...");
        fputs("Good Bye\n", stderr);
    }
}
