#include <stdio.h>
#include <string.h>

struct customer
{
    char firstName[20];
    char middleName[20];
    char lastName[20];
    char phoneNumber[16];
    float balance;

};

void show_customer(struct customer cust);
void show_database(struct customer cust_db[], int size);
float calculate_total_balance(struct customer cust_db[], int size);

int main()
{
    char input[20];
    int size = 0;
    struct customer records[100];
    for (int i = 0; i < sizeof(records)/sizeof(records[0]); i++)
    {
        printf("\nPlease enter the next customer record.\n");
        printf("    :X  Exits the program\n");
        printf("    :S  Shows the contents of the database\n");
        printf("    :C  Shows the balance sums of the database\n");

        printf("\nFirst Name: ");
        scanf("%s", input);

        if (strcasecmp(input, ":X") == 0)
        {
            printf("Good bye!\n");
            break;
        }
        else if (strcasecmp(input, ":S") == 0)
        {
            printf("Customer List:\n");
            printf("--------------------------------\n");
            show_database(records, size);
            continue;
        }
        else if (strcasecmp(input, ":C") == 0)
        {
            float totalBalance = calculate_total_balance(records, size);
            printf("Total Outstanding Balance: $%.2f\n", totalBalance);
            continue;
        }
        else
        {
            strcpy(records[i].firstName, input);
        }

        printf("Middle Name: ");
        scanf("%s", records[i].middleName);

        printf("Last Name: ");
        scanf("%s", records[i].lastName);

        printf("Phone Number: ");
        scanf("%s", records[i].phoneNumber);

        printf("Balance Due: ");
        scanf("%f", &records[i].balance);
        size++;

    }

    return 0;
}

void show_customer(struct customer cust)
{
    printf("Customer: %s %s %s\n", cust.firstName, cust.middleName, cust.lastName);
    printf("Phone Number: %s, Balance: %.2f\n", cust.phoneNumber, cust.balance);
    printf("--------------------------------\n");

}

void show_database(struct customer cust_db[], int size)
{
    for (int i = 0; i < size; i++)
    {
        show_customer(cust_db[i]);
    }
}

float calculate_total_balance(struct customer cust_db[], int size)
{
    float total = 0.0;
    for (int i = 0; i < size; i++)
    {
        total += cust_db[i].balance;
    }
    return total;
}