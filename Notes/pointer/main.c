#include <stdio.h>

int* findMid(int [], int);

int main(void)
{
    int a[] = {1, 2, 3, 4, 5};

    int n = sizeof(a) / sizeof(a[0]);

    int* mid = findMid(a, n);

    printf("%d", *(mid));

    return 0;
}

int* findMid(int arr[], int len)
{
    return &arr[len/2];
}
