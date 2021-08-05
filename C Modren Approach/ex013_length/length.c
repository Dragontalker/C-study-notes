/*
 * Name: length.c
 * Purpose: Determines the length of a message.
 * Author: Richard T. Yang
 */
#include <stdio.h>

int main(void)
{
    char ch;
    printf("Please enter a message: ");
    ch = getchar();

    int len = 0;
    while (ch != '\n') {
        len++;
        ch = getchar();
    }

    printf("Your message was %d character(s) long.\n", len);

    return 0;
}
