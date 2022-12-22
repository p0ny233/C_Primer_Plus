#include <stdio.h>

#define ROWS 3
#define COLS 5

// task b
double show_average(double * ar, int cols);

// task c
double show_all_data_average(double ar[][COLS], int rows);

// task d
double show_bigger(double ar[][COLS], int rows);

// show array
void show(double (*ar)[COLS], int rows);


int main(void)
{

    double arr[3][5];

    int i, j;
    double average, bigger;

    for (i = 0; i < 3; i++)
        for (j = 0; j < 5; j++)
            scanf("%lf", *(arr + i) + j);

    show(arr, ROWS);

    for (i = 0; average = 0.0, i < 3; i++)
    {
        average = show_average(*(arr + i), COLS);
        printf("average = %f\n", average);
    }

    average = show_all_data_average(arr, ROWS);
    
    bigger = show_bigger(arr, ROWS);

    printf("all_data_average = %f\n", average);
    printf("bigger = %f\n", bigger);

    return 0;
}

// task b
double show_average(double * ar, int cols)
{
    int j;
    double average, total;
    for(j = 0, average = 0.0; j < cols; j++)
    {
        total += *(ar + j);
    }
    return total / cols;
}


// task c
double show_all_data_average(double ar[][COLS], int rows)
{

    int i, j;
    double total, average;

    for (i = 0; i < rows; i++)
    {
        for(j = 0, average = 0.0; j < COLS; j++)
        {
            total += *(*(ar + i) + j);
        }
    }

    return total / (COLS * rows);
}



// task d
double show_bigger(double ar[][COLS], int rows)
{

    int i, j;
    double total, bigger;

    for (i = 0; i < rows; i++)
    {
        for(j = 0, bigger = 0.0; j < COLS; j++)
        {
            bigger = *(*(ar + i) + j) > bigger ? *(*(ar + i) + j) : bigger;
        }
    }

    return bigger;
}


void show(double (*ar)[COLS], int rows)
{

    int i, j;
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < COLS; j++)
            printf("%f\t", *(*(ar + i) + j));

        putchar('\n');
    }
}
