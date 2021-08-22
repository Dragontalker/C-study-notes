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
rat rat_get_normal(rat);

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

rat rat_get_normal(rat x)
{
    size_t c = gcd(x.num, x.denom);
    x.num /= c;
    x.denom /= c;
    return x;
}
