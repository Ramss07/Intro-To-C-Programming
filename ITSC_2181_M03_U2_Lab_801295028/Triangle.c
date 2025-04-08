#include <stdio.h>

int IsTriangles(int, int, int);

int main()
{
    int x, y, z;
    printf("Enter the length of the three sticks: ");
    scanf("%d %d %d", &x, &y, &z);

    if(IsTriangles(x, y, z))
    {
        printf("TRUE");
    }
    else
    {
        printf("FALSE");
    }
}

int IsTriangles(int x, int y, int z)
{
    if (x + y > z && x + z > y && y + z > x)
    {
        return 1;
    }
    return 0;
}

