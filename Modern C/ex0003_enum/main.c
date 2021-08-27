#include <stdio.h>
#include <stdlib.h>

typedef const char* String;

enum corvid { magpie, raven, jay, corvid_num };

int main(void)
{
    String const bird[corvid_num] = {
        [raven] = "raven",
        [magpie] = "magpie",
        [jay] = "jay"
    };

    for (unsigned i = 0; i < corvid_num; i++) {
        printf("Corvid #%u is the %s\n", i+1, bird[i]);
    }

    return EXIT_SUCCESS;
}
