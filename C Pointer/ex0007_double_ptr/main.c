#include <stdio.h>
#include <stdlib.h>

int main(void) {

    char* titles[] = {
        "A tale of Two Cities",
        "Wuthering Heights",
        "Don Quixote",
        "Odyssey",
        "Moby-Dick",
        "Hamlet",
        "Gulliver's Travels"
    };

    char** bestBooks[3];
    bestBooks[0] = &titles[0];
    bestBooks[1] = &titles[3];
    bestBooks[2] = &titles[5];

    char** englishBooks[4];
    englishBooks[0] = &titles[0];
    englishBooks[1] = &titles[1];
    englishBooks[2] = &titles[5];
    englishBooks[3] = &titles[6];

    printf("The value of bestBook[0] = %p\n", bestBooks[0]);
    printf("The value of englishBook[0] = %p\n", englishBooks[0]);

    return EXIT_SUCCESS;
}
