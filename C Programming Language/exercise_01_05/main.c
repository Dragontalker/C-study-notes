/*
    Exercise 1-5:
    Modify the temperature conversion program to print the table
    in reverse order, that is, from 300 degress to 0.
*/

#include <stdio.h>

#define LOWER 0         /* lower limit if table */
#define UPPER 300       /* upper limit */
#define STEP 20         /* step size */

void main(void)
{
    int celsius;

    for (celsius = UPPER; celsius >= LOWER; celsius = celsius - STEP) {
        printf("%6d %3.1f\n", celsius, (9.0/5.0) * celsius + 32);
    }
}
