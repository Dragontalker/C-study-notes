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

bool leap_year(unsigned);
Time time_set_yday(Time);

int main(void)
{
    Time today = {
        .tm_year = 2019-1900,
        .tm_mon = 4-1,
        .tm_mday = 3,
        .tm_hour = 10,
        .tm_min = 0,
        .tm_sec = 47
    };

    printf("This year is %d\n", today.tm_year + 1900);
    printf("Next year will be %d\n", today.tm_year + 1900 + 1);

    return EXIT_SUCCESS;
}

bool leap_year(unsigned year) {

    return !(year % 4) && ((year % 100) || !(year % 400));
}

Time time_set_yday(Time t) {

    t.tm_mday += DAYS_BEFORE[t.tm_mon] + t.tm_mday - 1;

    if ((t.tm_mon > 1) && leap_year(t.tm_year + 1900)) {
        t.tm_yday++;
    }

    return t;
}
