#include <stdio.h>

#define true 1

int main(void)
{
    int lower, upper;
    int result;

    while (true)
    {
        printf("Enter lower and upper integer limits: ");
        scanf("%d", &lower);
        scanf("%d", &upper);
        
        for (result = 0; lower <= upper; lower++)
        {
            result += lower * lower;
        }

        printf("result = %d\n", result);


    }
    return 0;

}
