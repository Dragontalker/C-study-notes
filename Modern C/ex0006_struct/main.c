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

    printf("Chough's name = %s\n", aName.chough);
    printf("Raven's name = %s\n", aName.raven);
    printf("Magpie's name = %s\n", aName.magpie);
    printf("Jay's name = %s\n", aName.jay);

    return EXIT_SUCCESS;
}
