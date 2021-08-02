#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    int *p = &a;

    printf("Please enter an integer: ");
    scanf("%d", &a);

    printf("a = %d\n", a);

    printf("Please re-enter an integer: ");
    scanf("%d", p);

    printf("new a = %d\n", a);

    return 0;
}
