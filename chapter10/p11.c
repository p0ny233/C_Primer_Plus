#include <stdio.h>

#define COLS 5
#define LINE "-------------------------------\n"
void x_arr(int (*ar)[COLS], int rows);
void show(int ar[][COLS], int rows);



int main(void)
{
     int arr[3][COLS] = 
     {
         {9, 6, 4, 6, 2},
         {4, 5, 2, 9, 3},
         {3, 0, 1, 4, 2},
     };
     

     show(arr, 3);
     printf(LINE);
     x_arr(arr, 3);
     show(arr, 3);

    return 0;

}

void x_arr(int (*ar)[COLS], int rows)
{
    int i, j;
    for (i = 0; i < rows; i++)
        for (j = 0; j < COLS; j++)
            *(*(ar + i) + j) = 2 * *(*(ar + i) + j);

}

void show(int ar[][COLS], int rows)
{
    int i, j;
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < COLS; j++)
            printf("%d\t", *(*(ar + i) + j));

        putchar('\n');
    }
}
