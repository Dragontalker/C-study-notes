/*
    Exercise 1-4:
    Write a program to print the correspoding Celsuis to
    Fahrenheit table.
*/

#include <stdio.h>

void main(void)
{
    float celsius, fahr;
    int lower, upper, step;

    lower = -20;
    upper = 100;
    step = 5;

    celsius = lower;
    while (celsius <= upper) {
        fahr = (9.0/5.0) * celsius + 32.0;
        printf("%6.1f %3.0f\n", celsius, fahr);
        celsius = celsius + step;
    }
}
