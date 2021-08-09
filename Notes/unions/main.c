#include <stdio.h>
#include <stdlib.h>

union abc {
    int a;
    char b;
    double c;
    float d;
};

int main()
{
    for (size_t i = 0; i < 10; i++) {
        printf("#%d\n", i);
    }
    return EXIT_SUCCESS;
}
