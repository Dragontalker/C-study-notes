#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct rat rat;

struct rat {
    bool sign;
    size_t num;
    size_t denom;
};

rat rat_get(long long, unsigned long long);

int main()
{
    rat rat1 = rat_get(1, 2);

    return 0;
}

rat rat_get(long long num, unsigned long long denom)
{
    rat ret = {
        .sign = (num < 0),
        .num = (num < 0) ? -num : num,
        .denom = denom,
    };

    return ret;
}
