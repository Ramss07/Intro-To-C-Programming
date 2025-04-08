#include <stdio.h>

int main()
{
    const float pi = 3.14159;
    float radius;
    float height;
    float volume;

    printf("Enter radius: ");
    scanf("%f", &radius);
    
    printf("Enter height: ");
    scanf("%f", &height);

    volume = pi * radius * radius * height;
    printf("Volume: %.2f", volume);

    return 0;
}
