#include <stdio.h>

void sort_array(int[], int*[], int);

int main()
{
    int my_ints[10];
    int *my_ptrs[10];
    int size = sizeof(my_ints)/sizeof(my_ints[0]);

    for(int i = 0; i < sizeof(my_ints)/sizeof(my_ints[0]); i++)
    {
        printf("Enter array value: ");
        scanf("%d", &my_ints[i]);
        my_ptrs[i] = &my_ints[i];
    }

    sort_array(my_ints, my_ptrs, size);

    printf("Sorted array:\n");
    for(int i = 0; i < 10; i++)
    {
        printf("%d ", *my_ptrs[i]);
    }
    printf("\n");

    return 0;
}

void sort_array(int my_ints[], int *my_ptrs[], int size)
{
    int *temp;
    for(int i = 0; i < size - 1; i++)
    {
        for(int j = 0; j < size-i-1; j++)
        {
            if(*my_ptrs[j] > *my_ptrs[j+1])
            {
                temp = my_ptrs[j];
                my_ptrs[j] = my_ptrs[j+1];
                my_ptrs[j+1] = temp;
            }
        }
    }
}