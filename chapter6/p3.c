#include <stdio.h>

#define ROWS 6

int main(void)
{
    
    int x = 1;
    int y = 0;
    char ch;

    for (; x <= ROWS; x++)
    {
        for (y = 0, ch = 'F'; y < x; y++)
        {
            printf("%c", ch-y);

        }
        printf("\n");

    }



    return 0;

}
