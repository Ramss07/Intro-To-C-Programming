#include <stdio.h>

void calc_bills(int dollar_amount, int *twenties, int *tens, int *fives, int *ones);

int main()
{
    int dollar_amount;
    int twenties = 0;
    int tens = 0;
    int fives = 0;
    int ones = 0;
    
    printf("Enter a dollar amount to pay: ");
    scanf("%d", &dollar_amount);
    calc_bills(dollar_amount, &twenties, &tens, &fives, &ones);

    printf("\nYou need:\n");
    printf("    $20 dollar bills: %d\n", twenties);
    printf("    $10 dollar bills: %d\n", tens);
    printf("    $5 dollar bills: %d\n", fives);
    printf("    $1 dollar bills: %d\n", ones);
    
    return 0;
}


void calc_bills(int dollar_amount, int *twenties, int *tens, int *fives, int *ones)
{
    *twenties = dollar_amount / 20;
    dollar_amount %= 20;
    *tens = dollar_amount / 10;
    dollar_amount %= 10;
    *fives = dollar_amount / 5;
    dollar_amount %= 5;
    *ones = dollar_amount / 1;
}