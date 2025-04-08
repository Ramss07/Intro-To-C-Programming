#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[100];
    int sum = 0;
    float average;
    for(int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++)
    {
        arr[i] = (rand() % 100) + 1;
    }

    for(int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++)
    {
        sum += arr[i];
    }

    average = sum / 100;
    printf("%f", average);

    return 0;
}