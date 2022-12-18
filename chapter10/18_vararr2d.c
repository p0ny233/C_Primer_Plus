#include <stdio.h>

int sum2d(int rows, int cols, int ar[*][*]);

#define ROWS 3
#define COLS 4

int main(void)
{
    int i,j;
    int rs = 3;
    int cs = 10;

    int junk[ROWS][COLS] = 
    {
        {2, 4, 6, 8},
        {3, 5, 7, 9},
        {12, 10, 8, 6},

    };

    int morejunk[ROWS - 1][COLS + 2] =
    {
        {20, 30, 40, 50, 60, 70},
        {5, 6, 7, 8, 9, 10},

    };



    int vvar[rs][cs];

    for (i = 0; i < rs; i++)
        for (j = 0; j < cs; j++)
            vvar[i][j] = i * j + j;


    printf("3x4 array\n");
    printf("Sum of elements = %d\n", sum2d(ROWS, COLS, junk));  

    printf("2x6 array\n");
    printf("Sum of elements = %d\n", sum2d(ROWS - 1, COLS + 2, morejunk));

    printf("3x10 array\n");
    printf("Sum of elements = %d\n", sum2d(rs, cs, vvar));



    return 0;

}

// int sum2d(int rows, int cols, int ar[rows][cols]) // correct

// int sum2d(int rows, int cols, int ar[*][*]);  // error define 

int sum2d(int rows, int cols, int ar[rows][cols])
{

    int i, j;
    int result;
    

    for (i = 0, result = 0; i < rows; i++)
        for (j = 0; j < cols; j++)
            result += *(*(ar + i) + j);

    return result;

}
