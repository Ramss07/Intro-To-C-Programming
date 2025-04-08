#include <stdio.h>

const float pi = 3.14159;
float calc_cylinder_volume(float, float);

int main()
{
    float radius, height;
    printf("Enter the cylinder radius: ");
    scanf("%f", &radius);

    printf("Enter the cylinder height: ");
    scanf("%f", &height);

    float volume = calc_cylinder_volume(radius, height);
    printf("The cylinder volume is: %f", volume);
}


float calc_cylinder_volume(float radius, float height)
{
    float volume = pi * radius * radius * height;
    return volume;
}