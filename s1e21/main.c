#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a = 'F';
    int f = 123;

    char *pa = &a;
    int *pf = &f;

    printf("a = %c\n", *pa);
    printf("f = %d\n", *pf);

    *pa = 'C';
    *pf += 1;

    printf("new a = %c\n", a);
    printf("new f = %d\n", f);

    return 0;
}
