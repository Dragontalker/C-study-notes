/*
 * Name: guess.c
 * Purpose: Ask user to guess a hidden number.
 * Author: Richard T. Yang
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_NUMBER 100

/* external vairable */
int secret_number;

/* prototypes */
void initialize_number_generator(void);
void choose_new_secret_number(void);
void read_guesses(void);

int main()
{
    printf("Guess the secret number between 1 and %d.\n\n", MAX_NUMBER);
    initialize_number_generator();

    char command;

    do {
        choose_new_secret_number();
        printf("A new number has been chosen.\n");

        read_guesses();

        printf("Play again? (Y/N) ");
        scanf(" %c", &command);
        printf(\n");
    } while (command == 'y' || command == 'Y');

    return 0;
}
