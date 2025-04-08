#include <stdio.h>

int main()
{
    int income;
    float taxRate;
    float taxDue;
    int dependents;
    int taxCredit;

    printf("Enter income: ");
    scanf("%d", &income);

    if(income <= 9275 && income >= 0)
    {
        taxRate = .12;
    }
    else if(income <= 37650 && income > 9275)
    {
        taxRate = .17;
    }
    else if(income <= 91150 && income > 37650)
    {
        taxRate = .27;
    }
    else if(income <= 190150 && income > 91150)
    {
        taxRate = .3;
    }
    else if(income > 190150)
    {
        taxRate = .35;
    }

    taxDue = income * taxRate;
    printf("Tax due = $%.2f", taxDue);

    printf("\nEnter the number of dependents (0 for none): ");
    scanf("%d", &dependents);

    taxCredit = dependents * 450;
    if(taxCredit > 2250)
    {
        taxCredit = 2250;
    }
    taxDue-=taxCredit;
    printf("Tax credit = $%d", taxCredit);

    printf("\nAdjusted Tax = $%.2f", taxDue);


    return 0;

}
