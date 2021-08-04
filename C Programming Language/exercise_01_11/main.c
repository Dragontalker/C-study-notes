#include <stdio.h>

#define IN 1    /* inside a word */
#define OUT 0   /* outside a word */

/* count lines, words, and characters in input */
int main()
{
    int input;

    int state;

    int line_count, word_count, character_count;

    state = OUT;

    line_count = word_count = character_count = 0;

    while ((input = getchar()) != EOF) {
        ++character_count;

        if (input == '\n')
            ++line_count;

        if (input == ' ' || input == '\n' || input == '\t') {
            state = OUT;
        } else if (state == OUT) {
            state = IN;
            word_count++;
        }
    }

    printf("The total line count = %d\n", line_count);
    printf("The total word count = %d\n", word_count);
    printf("The total character count = %d\n", character_count);

    return 0;
}
