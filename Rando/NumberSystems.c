#include <stdio.h>

void convertBinary(int);


int main()
{
    int number1;
    int number2;
    char binary[32];

    printf("Enter the first number: ");
    scanf("%d", &number1);
    printf("%d in binary: ", number1);
    convertBinary(number1);

    printf("Enter the second number: ");
    scanf("%d", &number2);
    printf("%d in binary: ", number2);
    convertBinary(number2);

    printf("---------------------------------");

    int andResult = number1 & number2;
    int orResult = number1 | number2;
    int xorResult = number1 ^ number2;
    printf("\nBitwise AND: ");
    convertBinary(andResult);
    printf("Bitwise OR: ");
    convertBinary(orResult);
    printf("Bitwise XOR: ");
    convertBinary(xorResult);
    printf("%d in hexadecimal: 0x%X\n", number1, number1);
    printf("%d in hexadecimal: 0x%X", number2, number2);
    

    return 0;
}


void convertBinary(int number) 
{
    char binary[32];

    for (int i = 0; i < 32; i++) 
    {
        binary[i] = '0';
    }

    int index = 32 - 1;
    while (number > 0) 
    {
        binary[index] = (number % 2) + '0';
        number /= 2;
        index--;
    }
    int flag = 1;
    printf("0b");
    for(int j = 0; j < 32; j++)
    {
        if(binary[j] == '1')
        {
            flag = 0;
        }
        if(!flag)
        {
            printf("%c", binary[j]);
        }
    }
    printf("\n");
}
