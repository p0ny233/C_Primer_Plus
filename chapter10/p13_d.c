#include <stdio.h>

#define ROWS 3
#define COLS 5

double show_bigger(double [][COLS], int);


int main(void)
{
    double arr[ROWS][COLS];
    double bigger;

    int i, j;

    for (i = 0; i < 3; i++)
        for (j = 0; j < 5; j++)
            scanf("%lf", *(arr + i) + j);

    bigger = show_bigger(arr, ROWS);
    
    printf("bigger = %f\n", bigger);
    return 0;
}


double show_bigger(double ar[][COLS], int rows)
{

    int i, j;
    double total, bigger;

    for (i = 0; i < rows; i++)
    {
        for(j = 0, bigger = 0.0; j < COLS; j++)
        {
            bigger = *(*(ar + i) + j) > bigger ? *(*(ar + i) + j) : bigger;
            printf("%f\t", *(*(ar + i) + j));
        }
        putchar('\n');
    }

    return bigger;
}
