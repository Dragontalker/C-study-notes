/*
 * Name: checking.c
 * Purpose: Balances a checkbook.
 * Author: Richard T. Yang
 */
#include <stdio.h>

int main(void)
{
    printf("*** ACME checkbook-balancing program ***\n");
    printf("Commands: 0=clear, 1=credit, 2=debit, 3=balance, 4=exit\n");

    int cmd;
    float credit, debit;
    float balance = 0.0f;

    for (;;) {
        printf("Please enter a command: ");
        scanf("%d", &cmd);

        switch (cmd) {
            case 0:
                balance = 0.0f;
                break;
            case 1:
                printf("Please enter the amount of credit: ");
                scanf("%f", &credit);
                balance += credit;
                break;
            case 2:
                printf("Please enter the amount of debit: ");
                scanf("%f", &debit);
                balance -= debit;
                break;
            case 3:
                printf("Your current balance is: $%.2f\n", balance);
                break;
            case 4:
                return 0;
            default:
                printf("Commands: 0=clear, 1=credit, 2=debit, 3=balance, 4=exit\n");
                break;
        }
    }

    return 0;
}
