#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i = 100; // i1
    {
        int i = 110; // i2
        {
            int i = 120; // i3
            printf("i = %d\n", i);
        }
        {
            int i = 130; // i4
            printf("i = %d\n", i);
        }
    }
    return 0;
}
