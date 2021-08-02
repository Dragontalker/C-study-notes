#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num = 1024;
    int *pi = &num;
    int *ps = "FishC";
    void *pv;

    pv = pi;
    printf("pv: %p, pi: %p\n", pv, pi);

    pv = ps;

    printf("pv: %p, ps: %p\n", pv, ps);

    return 0;
}
