#include <stdio.h>

void main(void)
{
    int c, blank_count, tab_count, newline_count;

    blank_count = tab_count = newline_count = 0;

    while ((c = getchar()) != EOF) {

        if (c == ' ') {
            ++blank_count;
        }

        if (c == '\t') {
            ++tab_count;
        }

        if (c == '\n') {
            ++newline_count;
        }
    }

    printf("The total count of blanks = %d\n", blank_count);
    printf("The total count of tabs = %d\n", tab_count);
    printf("The total count of new lines = %d\n", newline_count);
}
