#include <stdio.h>

#define true 1

int main(void)
{

    float a, b;
    while (true)
    {

        if (scanf("%f", &a) && scanf("%f", &b));

        if (a > b)
            printf("%f", (a - b) / (a * b));
        else  
            printf("%f", (b - a) / (a * b));

        printf("\n");
    }

    
       

    return 0;

}
