#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[argc + 1]) {

    FILE* logFile = fopen("mylog.txt", "a");

    if (!logFile) {
        perror("fopen failed");
        return EXIT_FAILURE;
    }

    fputs("feeling fine today\n", logFile);

    return EXIT_SUCCESS;
}
