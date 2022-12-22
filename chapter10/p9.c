#include <stdio.h>
#include <stdlib.h>

void copy_arr_to_arr(int, int, double[*][*], double[*][*]);
void show_arr(int, int, double[*][*]);


int main(void)
{

    int rows = 3;
    int cols = 5;

    double array[3][5] =
    {
        {1.0, 3.0, 5.0, 7.0, 9.0},
        {2.0, 4.0, 6.0, 8.0, 0.0},
        {9.0, 0.8, 0.1, 5.8, 3.1},

    };

    double array2[rows][cols];


    copy_arr_to_arr(rows, cols, array2, array);

    show_arr(rows, cols, array);

    return 0;

}

void copy_arr_to_arr(int rows, int cols, double t_arr[rows][cols], double s_arr[rows][cols])
{
    // s to t
    int i, j;
    for (i = 0; i < rows; i++)
        for (j = 0; j < cols; j++)
            *(*(t_arr + i) + j) = *(*(s_arr + i) + j);

}

void show_arr(int rows, int cols, double ar[rows][cols])
{
    int i, j;
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
            printf("%f\t", *(*(ar + i) + j));

        putchar('\n');
    }

        
}
