#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int array[100];
    int max = 0;

    for (int i = 0; i < 100; i++) 
    {
        array[i] = rand() % 100 + 1;
    }

    for (int i = 0; i < 100; i++) 
    {
        if (array[i] > max) 
        {
            max = array[i];
        }
    }

    printf("Max: %d\n", max);
    return max;
}
