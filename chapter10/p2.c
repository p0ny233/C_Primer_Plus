#include <stdio.h>

void copy_arry(double [], double [], int rows);
void copy_ptr(double *, double *, int rows);
void copy_ptrs(double *, double *, double *);
void show(double * ar, int n);

int main(void)
{
    double source[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
    double target1[5];
    double target2[5];
    double target3[5];

    copy_arry(target1, source, 5);
    copy_ptr(target2, source, 5);
    copy_ptrs(target3, source, source + 5);

    show(source, 5);
    show(target1, 5);
    show(target2, 5);
    show(target3, 5);


    return 0;

}

void copy_arry(double target[], double source[], int rows)
{
    int i;
    
    for (i = 0; i < rows; i++)
        target[i] = source[i];
}

void copy_ptr(double * target, double * source, int rows)
{
    int i;
    for (i = 0; i < rows; i++)
        *target++ = *source++;
}

void copy_ptrs(double * target, double * source, double * end)
{
    while(source < end && (*target++ = *source++));
}

void show(double * ar, int n)
{
    int i;
    for (i = 0; i < n; i++)
        printf("%f\t", *(ar + i));

    putchar('\n');
    
}
