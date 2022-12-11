#include <stdio.h>

double min(double, double);

int main(void)
{

    double x = 2.1;
    double y = 5.6;
    double result;

    result = min(x, y);
    printf("result = %lf\n", result);

    return 0;
}

double min(double x, double y)
{
    return x > y ? y : x;
}
