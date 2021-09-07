#include <stdio.h>
#include <stdlib.h>

#define N 5

void displayArray(int[], int);

int main(void)
{
    int vector[N] = {1, 2, 3, 4, 5};

    displayArray(vector, N);

    return EXIT_SUCCESS;
}

void displayArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d\n", arr[i]);
    }
}
