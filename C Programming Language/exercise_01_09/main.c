/*
    Exercise 1-10:
    Write a program to copy its input to its output, replacing
    each string of one or more blanks by a single blank.
*/

#include <stdio.h>

int main(void)
{
    int c, blank_count;

    blank_count = 0;

    while ((c = getchar()) != EOF) {

        if (c == ' ') {
            if (blank_count == 0) {
                putchar(c);
            }
            blank_count++;
        } else {
            blank_count = 0;
            putchar(c);
        }
    }

    return 0;
}
