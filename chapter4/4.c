#include <stdio.h>

#define PI 3.14159

int main(void)
{
    float area, circum, radius;
    printf("What is the radius of your pizza?\n");
    scanf("%f", &radius);
    area = radius * radius * PI;
    
    circum = 2.0 * radius * PI;
    printf("Your basic pizza parameters are as follows:\n");

    printf("circumference = %1.2f, area = %1.2f\n", circum, area);
    
    return 0;
}
