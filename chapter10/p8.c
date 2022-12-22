#include <stdio.h>

void copy_ptr(double * target, double * source, int rows);
void show(double * ar, int rows);


int main(void)
{
    int i;
    double arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    double brr[3];

    copy_ptr(brr, arr + 2, 3);

    show(brr, 3);

    return 0;

}

void copy_ptr(double * target, double * source, int rows)

{
    int i;
    for (i = 0; i < rows; i++)
        *target++ = *source++;
}

void show(double * ar, int rows)
{
    int i;
    for (i = 0; i < rows; i++)
        printf("%f\n", *(ar + i));
}
