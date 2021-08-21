#include <stdio.h>
#include <stdlib.h>

void foo(int, int);

int main()
{
    foo(10, 10);

    return 0;
}

void foo(int n, int m)
{
    int* p;

    /* allocate a block of n ints */
    p = (int*) malloc(n * sizeof(int));

    if(p == NULL)
    {
        perror("malloc");
        exit(0);
    }

    for (size_t i = 0; i < n; i++)
    {
        p[i] = i;
    }

    /* add space for m ints to end of p block */
    p = (int*) realloc(p, (n + m) * sizeof(int));

    if (p == NULL)
    {
        perror("realloc");
        exit(0);
    }

    for (size_t i = n; i < n+m; i++)
    {
        p[i] = i;
    }

    /* print new array */
    for (size_t i = 0; i < n + m; i++)
    {
        printf("%d\n", p[i]);
    }

    free(p);
}
