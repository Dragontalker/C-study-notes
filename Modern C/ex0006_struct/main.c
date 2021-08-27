#include <stdio.h>
#include <stdlib.h>

typedef const char* String;

struct birdStruct {
    String jay;
    String magpie;
    String raven;
    String chough;
};

typedef struct birdStruct Bird;

int main(void)
{
    Bird const aName = {
        .chough = "Henry",
        .raven = "Lissy",
        .magpie = "Frau",
        .jay = "Joe"
    };

    return EXIT_SUCCESS;
}
