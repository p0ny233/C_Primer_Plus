#include <stdio.h>

int main(void)
{

    int array[8] = {0};

    int i,j;
    for (i = 0; i < 8; i++)
    {
        if (i == 0)
        {
            array[i] = 1;
            continue;
        }

        if (i == 1)
        {
            array[i] = 2;
            continue;
        }
        array[i] = 2;

        for (j = i - 1; j; j--)
        {
            array[i] *= 2;
        }

    }

    i = 0;

    do 
    {    
        printf("array[%d] = %d\n", i, array[i]);
    }while (++i < 8);

    return 0;

}
