#include <stdio.h>

int main()
{
    int temp1;
    int temp2;
    int temp3;
    int highestTemp;
    int dayRecorded;

    printf("You will be asked to enter the daily high temperature for 3 consecutive days.\n");
    printf("Enter a high temperature: \n");
    scanf("%d", &temp1);
    printf("Enter a high temperature: \n");
    scanf("%d", &temp2);
    printf("Enter a high temperature: \n");
    scanf("%d", &temp3);

    if(temp1 > temp2 && temp1 > temp3)
    {
        highestTemp = temp1;
        dayRecorded = 1;
    }
    else if(temp2 >= temp1 && temp2 > temp3)
    {
        highestTemp = temp2;
        dayRecorded = 2;
    }
    else if(temp3 >= temp1 && temp3 >= temp2)
    {
        highestTemp = temp3;
        dayRecorded = 3;
    }

    printf("The highest recorded temperature in the 3-day period was: %d degrees\n", highestTemp);
    printf("Recorded on day #%d", dayRecorded);

    return 0;

}
