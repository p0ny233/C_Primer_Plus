#include <stdio.h>

#define ROWS 5

int main(void)
{

    int x = 1;
    int y = 0;

    for (; x <= ROWS; x++)
    {
        for (y = 0; y < x; y++)
        {
            printf("$");
        }
        printf("\n");

    }

}
