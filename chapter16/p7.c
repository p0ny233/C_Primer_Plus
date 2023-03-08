#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

void show_array(const double ar[], int n);
double * new_d_array(int n, ...);

int main(void)
{
    double * p1;
    double * p2;

    p1 = new_d_array(5, 1.2, 2.3, 3.4, 4.5, 5.6);
    p2 = new_d_array(4, 100.0, 20.00, 8.08, -1890.0);

    show_array(p1, 5);
    putchar('\n');
    show_array(p2, 4);

    return 0;
}

double * new_d_array(int n, ...)
{
    int i;
    double * ptr;
    va_list ap;
    va_start(ap, n);
    ptr = malloc(n * sizeof(double));

    for (i = 0; i < n; i++)
        *(ptr + i) = va_arg(ap, double);

    va_end(ap);
    return ptr;
}

void show_array(const double * ar, int n)
{
    int i;
    for (i = 0; i < n; i++)
        printf("%f\n", *(ar + i));
}
