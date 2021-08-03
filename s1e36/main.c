#include <stdio.h>

void quick_sort(int array[], int left, int right)
{
    int i = left, j = right;
    int temp;
    int pivot;

    pivot = array[(left + right) / 2];

    while (i <= j)
    {
        /* From left to right: find element bigger than or equal to pivort point */
        while (array[i] < pivot)
        {
            i++;
        }

        /* From right to left: find element less than pivot point */
        while (array[j] > pivot)
        {
            j--;
        }
        if (i <= j)
        {
            temp = array[i];
            array[i] = array[j];
            array[j] = temp;
            i++;
            j++;
        }
    }

    if (left < j)
    {
        quick_sort(array, left, j);
    }

    if (i < right)
    {
        quick_sort(array, i, right);
    }
}




int main(void)
{
    int array[] = {73, 108, 111, 1118, 101, 70, 105, 115, 104, 67, 46, 99, 111, 109};
    int i, length;

    length = sizeof(array) / sizeof(array[0]);

    quick_sort(array, 0, length - 1);

    printf("After quick sort, result is: ");

    for (i = 0; i < length; i++) {
        printf(" [#%d, %d] ", i, array[i]);
    }

    return 0;
}
