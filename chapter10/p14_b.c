#include <stdio.h>

// task b
double group_average(int, double [*]);

// task c
double all_data_average(int, int, double ar[*][*]);

// task d
double get_bigger(int rows, int cols, double ar[rows][cols]);

void show(int, int, double[*][*]);


int main(void)
{
    int rows = 3;
    int cols = 5;

    double arr[rows][cols];
    double average;
    double bigger;


    int i, j;
    // input data
    for (i = 0; i < rows; i++)
        for (j = 0; j < cols; j++)
            scanf("%lf", *(arr + i) + j);

    // display data
    show(rows, cols, arr);

    // task b
    for (i = 0; i < 3; i++)
    {
        average = group_average(cols, *(arr + i));
        printf("task b : average = %f\n", average);
    }

    // task c
    average = all_data_average(rows, cols, arr);

    // task d
    bigger = get_bigger(rows, cols, arr);

    printf("task c: average = %f\n", average);

    printf("task d: bigger = %f\n", bigger);

    return 0;
}

// task b
double group_average(int rows, double ar[rows])
{
    int i;
    double total;
    for (i = 0, total = 0.0; i < rows; i++)
        total += *(ar + i);
    return total / rows;
}

// task c
double all_data_average(int rows, int cols, double ar[rows][cols])
{
    int i, j;
    double total;
    for (i = 0, total = 0.0; i < rows; i++)
        for (j = 0; j < cols; j++)
            total += *(*(ar + i) + j);

    return total / (rows * cols);
}

// task d
double get_bigger(int rows, int cols, double ar[rows][cols])
{
    double bigger;
    int i, j;
    for (i = 0, bigger = 0.0; i < rows; i++)
        for (j = 0; j < cols; j++)
            bigger = *(*(ar + i) + j) > bigger ? *(*(ar + i) + j) : bigger;

    return bigger;
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


