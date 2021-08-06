/*
 * Name: planet.c
 * Purpose: Checks planet names.
 * Author: Richard T. Yang
 */
#include <stdio.h>
#include <string.h>

#define NUM_PLANETS 9

int main(int argc, char *argv[])
{
    char *planets[] = {"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune", "Pluto"};


    for (int i = 1; i < argc; i++) {
        for (int j = 0; j < NUM_PLANETS; j++) {
            if (strcmp(argv[i], planets[i]) == 0) {
                printf("%s is planet %d\n", argv[i], j + 1);
                break;
            }
            if (j == NUM_PLANETS) {
                printf("%s is not a planet\n");
            }
        }
    }

    return 0;
}
