#include <stdio.h>
#include <stdarg.h>

double sum(int n, ...);

int main(void)
{
    double s, t;
    s = sum(3, 1.1, 2.5, 13.3);
    t = sum(6, 1.1, 2.1, 13.1, 4.1, 5.1, 6.1);

    printf("return value for "
           "s = sum(3, 1.1, 2.5, 13.3): %g\n", s);

    printf("return value for "
            "t = sum(6, 1.1, 2.1, 13.1, 4.1, 5.1, 6.1): %g\n", t);

    return 0;
}


double sum(int n, ...)
{
    int i;
    double sum;

    va_list ap;
    va_start(ap, n);  // init args
    for (sum = 0.0, i = 0; i < n; i++)
        sum += va_arg(ap, double);
    
    va_end(ap); // tips
    return sum;
}
