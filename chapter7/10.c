#include <stdio.h>

int main(void)
{


    float length, width;

    while (scanf("%f",&length))
    {
        printf("Length = %.2f:\n", length);
        if (scanf("%f", &width) != 1)
            break;
        printf("Width = %.2f\n", width);
        printf("Area = %.2f", length * width);
        printf("Enter the length of the rectangle:\n");
    }
    printf("Done.\n");

    return 0;

}
