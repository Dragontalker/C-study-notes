#include <stdio.h>

void minMax(int [], int, int*, int*);

int main(void)
{
    int a[] = {23, 4, 21, 987, 45, 32, 10, 123, 986, 50, 3, 4, 5};

    int min, max;

    int len = sizeof(a) / sizeof(a[0]);

    minMax(a, len, &min, &max);

    printf("The minimum value in this array = %d\n", min);
    printf("The maximum value in this array = %d\n", max);

    return 0;
}

void minMax(int arr[], int len, int* min, int* max)
{
    *(min) = *(max) = arr[0];

    for (int i = 0; i < len; i++) {
        if (arr[i] > *(max)) {
            *(max) = arr[i];
        }
        if (arr[i] < *(min)) {
            *(min) = arr[i];
        }
    }
}
