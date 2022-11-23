#include <stdio.h>

#define ROWS 6

int main(void)
{


    int x = 1;
    int y = 0;
    char ch = 'A';

    for (; x <= ROWS; x++)
    {   
        for (y = 0; y < x; y++)
        {
            printf("%c", ch++);
        }
        
        //ch = ch + 1;
        printf("\n");

    }

    return 0;

}
