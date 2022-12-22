#include <stdio.h>

void show(int, int, double[*][*]);


int main(void)
{
    int rows = 3;
    int cols = 5;

    double arr[rows][cols];

    int i, j;
    // input data
    for (i = 0; i < rows; i++)
        for (j = 0; j < cols; j++)
            scanf("%lf", *(arr + i) + j);

    // display data
    show(rows, cols, arr);


    return 0;
}


void show(int rows, int cols, double ar[rows][cols])
{

    int i, j;
    for (i = 0; i < rows; i++)
    {

        for(j = 0; j < cols; j++)
            printf("%f\t", *(*(ar + i) + j));

        putchar('\n');
    }
}
