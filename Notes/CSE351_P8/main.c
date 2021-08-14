#include <stdio.h>
#include <stdlib.h>

void show_bytes(char*, int);
void show_int(int);

int main(void)
{
    int a = 12345;

    printf("int a = 12345;\n");
    show_int(a);

    return EXIT_SUCCESS;
}

void show_bytes(char* start, int len)
{
    for (size_t i = 0; i < len; i++)
    {
        printf("%p\t0x%.2x\n", start + i, *(start + i));
    }
    printf("\n");
}

void show_int(int x)
{
    show_bytes( (char*) &x, sizeof(int));
}
