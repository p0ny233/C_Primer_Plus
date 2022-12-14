#include <stdio.h>

#define ROWS 3
#define COLS 4

void sum_cols(int ar[][COLS], int row);
void sum_rows(int(*ar)[COLS], int row);
int sum2d(int(*ar)[COLS], int row);

int main(void)
{

    int junk[ROWS][COLS] = {
        {2, 4, 6, 8},
        {3, 5, 7, 9},
        {12, 10, 8, 6}
    };

    sum_rows(junk, ROWS);
    sum_cols(junk, ROWS);
    //
    printf("Sum of all element = %d\n", sum2d(junk, ROWS));



    return 0;

}

void sum_rows(int(*ar)[COLS], int row)  // ar == junk 
{
    int i;
    int j;
    int row_total;
    for (i = 0; row_total = 0, i < row; i++, ar++)
    {
        for (j = 0; j < COLS; j++)
            row_total += *(*ar + j);
        printf("row %d: sum = %d\n", i, row_total);

    }

}

void sum_cols(int ar[][COLS], int row)
{

    int i;
    int j;
    int col_total;
    for (i = 0; col_total = 0, i < COLS; i++)
    {
        for (j = 0; j < row; j++)
            col_total += ar[j][i];

        printf("col %d: sum = %d\n", i, col_total);


    }

    

}

int sum2d(int(*ar)[COLS], int row)
{
    int i;
    int j;
    int total;

    for (total = 0, i = 0; i < row; i++, ar++)
        for (j = 0; j < COLS; j++)
            total += *(*ar + j);

    return total;
}





