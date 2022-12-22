#include <stdio.h>

void show(double * ar, int n);
void copy_ptr(double * target, double * source, int rows);

int main(void)
{
    int rows;
    int i;

    double s_arry[][3] = 
    {
        {1, 3, 5},
        {7, 9, 11},
        {13, 15, 17},
        {2, 4, 6},
    };

    rows = sizeof(s_arry) / sizeof(*(s_arry));


    double t_arry[rows][3];

    for (i = 0; i < rows; i++)
        copy_ptr(*(t_arry + i), *(s_arry + i), 3);

    
    for (i = 0; i < rows; i++)
        show(*(t_arry + i), 3);
    


    return 0;

}

void copy_ptr(double * target, double * source, int rows)
{
    int i;
    for (i = 0; i < rows; i++)
        *target++ = *source++;
}

void show(double * ar, int n)
{
    int i;
    for (i = 0; i < n; i++)
        printf("%f\t", *(ar + i));

    putchar('\n');
    
}
