#include <stdio.h>
#include <stdlib.h>

struct abc {
    char a;
    int b;
    char c;
};

int main()
{
    struct abc var;
    printf("%d", sizeof(var));

    return 0;
}
