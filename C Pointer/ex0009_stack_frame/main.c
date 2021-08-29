#include <stdio.h>
#include <stdlib.h>

#define N 4

float average(int*, int);

int main(void) {

    int array[N] = { 34, 23, 54, 86 };

    float avg = average(array, N);

    printf("The average = %.2f\n", avg);

    return EXIT_SUCCESS;
}

float average(int* arr, int size) {

    int sum = 0;

    printf("arr: %p\n", &arr);
    printf("size: %p\n", &size);
    printf("sum: %p\n", &sum);

    for (unsigned i = 0; i < size; i++) {
        sum += arr[i];
    }

    return (sum * 1.0f) / size;
}
