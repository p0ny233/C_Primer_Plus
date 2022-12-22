#include <stdio.h>

#define ROWS 3
#define COLS 5

double show_average(double *, int);


int main(void)
{
    double arr[3][5];

    int i, j;
    double average;

    for (i = 0; i < 3; i++)
        for (j = 0; j < 5; j++)
            scanf("%lf", *(arr + i) + j);

    for (i = 0; average = 0.0, i < 3; i++)
    {
        average = show_average(*(arr + i), COLS);
        printf("average = %f\n", average);
    }

    return 0;
}


double show_average(double * ar, int cols)
{
    int j;
    double average, total;
    for(j = 0, average = 0.0; j < cols; j++)
    {
        total += *(ar + j);
        printf("%f\t", *(ar + j));
    }
    return total / cols;
}
