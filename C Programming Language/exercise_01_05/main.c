/*
    Exercise 1-5:
    Modify the temperature conversion program to print the table
    in reverse order, that is, from 300 degress to 0.
*/

#include <stdio.h>

void main(void)
{
    int celsius;

    for (celsius = 300; celsius >= 0; celsius = celsius - 20) {
        printf("%6d %3.1f\n", celsius, (9.0/5.0) * celsius + 32);
    }
}
