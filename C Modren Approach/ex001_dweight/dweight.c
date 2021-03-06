/*
 * Name: dweight.c
 * Purpose: Computes the dimensional weight of a 12" x 10" x 8" box.
 * Author: Richard T. Yang
 */
#include <stdio.h>

#define INCHES_PER_POUND 166

int main(void)
{
    int length = 12;
    int width = 10;
    int height = 8;

    int volume = length * width * height;
    int weight = (volume + INCHES_PER_POUND - 1) / INCHES_PER_POUND;

    printf("Dimensions: %d\" x %d\" x %d\"\n", length, width, height);
    printf("Volumn (cubic inches): %d\n", volume);
    printf("Dimensional weight (pounds): %d\n", weight);

    return 0;
}
