#include <stdio.h>

int main(void)
{

    double array[8];
    double array1[8];

    int i, j, len;
    
    for (i = 0, len = sizeof(array) / sizeof(&array[0]); i < len; i++)
    {   
        printf("Enter %d number in: ", i + 1);
        scanf("%lf", &array[i]);
    }


    for (i = 0; i < len; i++)
    {
        if (i == 0)
        {
            array1[i] = array[i];
            continue;
        }   

        array1[i] = array1[i - 1] + array[i];

    }

    for (i = 0; i < len; i++)
    {
        printf("%lf\t", array[i]);
    }

    printf("\n");

    for (i = 0; i < len; i++)
    {
        printf("%lf\t", array1[i]);
    }

    printf("\n");

    return 0;

}
