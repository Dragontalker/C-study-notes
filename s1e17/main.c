#include <stdio.h>
#include <stdlib.h>

#define NUM 10

int main()
{
    int s[NUM];
    int i, sum = 0;

    for (i = 0; i < 10; i++)
    {
        printf("Please enter %ith student's score: ", i + 1);
        scanf("%d", &s[i]);
        sum += s[i];
    }

    printf("The average score is : %.2f\n", (double) sum / NUM);

    return 0;
}
