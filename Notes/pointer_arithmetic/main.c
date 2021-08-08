#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[] = {5, 16, 7, 89, 45, 32, 23, 10};

    int* p = &a[1]; //16
    int* q = &a[5]; //32

    printf("%d ", *(p + 3)); //45
    printf("%d ", *(q - 3)); //7
    printf("%d ", q - p); //4
    printf("%d ", p < q); //1
    printf("%d ", *(p) < *(q)); //1


    return 0;
}
