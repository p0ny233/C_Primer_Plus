#include <stdio.h>

int main(void)
{

    int row;
    int col;

    int i, j;

    char ch,ch1;

    scanf("%c", &ch);

    row = ch - 'A';

    for (i = 0; i < row + 1; i++)
    {
        for (j = i; j < row; j++)
            printf(" ");

        for (col = 0; col <= i; col++)
        {
            printf("%c", ch = 'A' + col);

        }

        for (; ch -'A'; ch--)
            printf("%c", ch - 1);



        printf("\n");
    }
    
    
    return 0;

}
