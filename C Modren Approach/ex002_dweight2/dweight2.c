/*
 * Name: dweight2.c
 * Purpose: Computes the dimensional weight of a box from input provided by the user.
 * Author: Richard T. Yang
 */
#include <stdio.h>

#define INCHES_PER_POUND 166

int main(void)
{
    int length, width, height;

    printf("Enter length of box: ");
    scanf("%d", &length);

    printf("Enter width of box: ");
    scanf("%d", &width);

    printf("Enter height of box: ");
    scanf("%d", &height);

    int volume = length * width * height;
    int weight = (volume + INCHES_PER_POUND - 1) / INCHES_PER_POUND;

    printf("Dimensions: %d\" x %d\" x %d\"\n", length, width, height);
    printf("Volumn (cubic inches): %d\n", volume);
    printf("Dimensional weight (pounds): %d\n", weight);

    return 0;
}

