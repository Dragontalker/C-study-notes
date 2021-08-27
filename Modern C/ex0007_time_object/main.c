#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

#define DAYS_BEFORE                             \
(int const[12]) {                               \
    [0] = 0, [1] = 31, [2] = 59, [3] = 90,      \
    [4] = 120, [5] = 151, [6] = 181, [7] = 212, \
    [8] = 243, [9] = 273, [10] = 304, [11] = 334\
}

typedef struct tm Time;

int main(void)
{

    return EXIT_SUCCESS;
}
