#include <stdio.h>
#include <stdlib.h>

#pragma pack(1)

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
