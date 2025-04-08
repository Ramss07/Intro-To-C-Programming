#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() 
{
    int array[100];
    int sum = 0;
    int average;

    srand(time(0)); 
    
    for (int i = 0; i < 100; i++) 
    {
        array[i] = rand() % 100 + 1; 
    }

    for (int i = 0; i < 100; i++) 
    {
        sum += array[i];
    }

    average = sum / 100;

    printf("Average: %d\n", average);
    return 0;
}
