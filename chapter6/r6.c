#include <stdio.h>

#define ROW 4
#define COL 8

int main(void)
{


    int i, j;
    char ch = '$';
    for (i = 0; i < ROW; i++)
    {
        for (j = 0;j < COL; j++)
        {
            printf("%c", ch);

        }
        printf("\n");


    }

    return 0;

}
