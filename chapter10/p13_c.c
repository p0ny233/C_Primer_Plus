#include <stdio.h>

#define ROWS 3
#define COLS 5

double show_average(double [][COLS], int);

int main(void)
{
    double arr[ROWS][COLS];
    double average;

    int i, j;

    for (i = 0; i < 3; i++)
        for (j = 0; j < 5; j++)
            scanf("%lf", *(arr + i) + j);

    average = show_average(arr, ROWS);

    printf("total to average = %f\n", average);

    return 0;
}


double show_average(double ar[][COLS], int rows)
{

    int i, j;
    double total, average;

    for (i = 0; i < rows; i++)
    {
        for(j = 0, average = 0.0; j < COLS; j++)
        {
            total += *(*(ar + i) + j);
            printf("%f\t", *(*(ar + i) + j));
        }
        putchar('\n');
    }

    return total / (COLS * rows);
}
