/*
 * Name: length.c
 * Purpose: Determines the length of a message.
 * Author: Richard T. Yang
 */
#include <stdio.h>

int main(void)
{
    printf("Please enter a message: ");

    int len = 0;
    while (getchar() != '\n') {
        len++;
    }

    printf("Your message was %d character(s) long.\n", len);

    return 0;
}
