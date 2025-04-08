#include <stdio.h>

int main()
{
    int highestTemp = 0;
    int currentTemp;
    int lastDay;
    printf("You will be asked to enter the daily high temperature for 10 consecutive days.\n");
    for (int i = 1; i <= 10; i++)
    {
        printf("Enter a high temperature: ", i);
        scanf("%d", &currentTemp);
        if(currentTemp >= highestTemp)
        {
            highestTemp = currentTemp;
            lastDay = i;
        }

    }
    printf("The highest recorded temperature in the 10-day period: %d", highestTemp);
    printf("\nLast recorded on: Day %d", lastDay);

}