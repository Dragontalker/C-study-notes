#include <stdio.h>

int f(int, int*, int**);

int main()
{
    int c = 4;
    int* b = &c;
    int** a = &b;

    printf("%d", f(c, b, a));

    return 0;
}

int f(int x, int* py, int** ppz)
{
    int y, z;

    *(*(ppz)) += 1; // c = 5

    z = *(*(ppz)); // z = 5

    *(py) += 2; // c = 7

    y = *(py); // y = 7

    x += 3; // x = 7

    return x + y + z;

}
