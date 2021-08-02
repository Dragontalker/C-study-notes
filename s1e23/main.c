#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *p1[5] = {
        "Let programming change the world! -- FishC Studio",
        "Just do it! -- NIKE",
        "Everything is possible! -- LiNing",
        "Never stop! -- AnTa",
        "One more thing! -- Apple"
    };

    int i;

    for (i = 0; i < 5; i++) {
        printf("%s\n", p1[i]);
    }

    return 0;
}
