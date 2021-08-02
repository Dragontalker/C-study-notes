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

    printf("size of *pa = %d\n", sizeof(pa));
    printf("size of *pf = %d\n", sizeof(pf));

    printf("address of *pa = %p\n", pa);
    printf("address of *pf = %p\n", pf);

    return 0;
}
