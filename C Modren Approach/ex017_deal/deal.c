/*
 * Name: deal.c
 * Purpose: Deals a random hand of cards.
 * Author: Richard T. Yang
 */
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM_SUITS 4
#define NUM_RANKS 13

int main(void)
{
    const char rank_code[] = {'A', '2', '3', '4', '5', '6', '7', '8', '9', '10', 'J', 'Q', 'K'};
    const char suit_code[] = {'C', 'D', 'H', 'S'};

    bool in_hand[NUM_SUITS][NUM_RANKS] = {false};

    int num_cards;
    printf("Please enter the number of cards in hand: ");
    scanf("%d", &num_cards);

    printf("Your hand: ");

    srand((unsigned) time(NULL));

    int rank, suit;

    while (num_cards > 0) {
        suit = rand() % NUM_SUITS;
        rank = rand() % NUM_RANKS;

        if (!in_hand[suit][rank]) {
            in_hand[suit][rank] = true;
            num_cards--;
            printf(" %c%c", rank_code[rank], suit_code[suit]);
        }
    }
    printf("\n");

    return 0;
}
