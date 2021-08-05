/*
 * Name: date.c
 * Purpose: Prints a date in legal form.
 * Author: Richard T. Yang
 */
#include <stdio.h>

int main(void)
{
    int month, day, year;
    printf("Please enter the date (mm/dd/yy): ");
    scanf("%d/%d/%d", &month, &day, &year);

    printf("The legal format is %d", day);

    switch (day) {
        case 1: case 21: case 31:
            printf("st");
            break;
        case 2: case 22:
            printf("nd");
            break;
        case 3: case 23:
            printf("rd");
            break;
        default:
            printf("th");
            break;
    }

    return 0;
}
