#include <stdio.h>

#define ROWS 3
#define COLS 5

void show(double (*)[COLS], int);


int main(void)
{
    double arr[3][5];

    int i, j;

    for (i = 0; i < 3; i++)
        for (j = 0; j < 5; j++)
            scanf("%lf", *(arr + i) + j);

    show(arr, ROWS);

    return 0;
}


void show(double (*ar)[COLS], int rows)
{

    int i, j;
    for (i = 0; i < rows; i++)
    {

        for(j = 0; j < COLS; j++)
            printf("%f\t", *(*(ar + i) + j));

        putchar('\n');
    }
}
