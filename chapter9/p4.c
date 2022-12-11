#include <stdio.h>
double compute(double, double);

int main(void)
{

    int x,y;
    scanf("%d %d", &x, &y);
    printf("%lf\n", compute(1.0 / x, 1.0 / y));


    return 0;

}

double compute(double dx, double dy)
{
    double result;
    result = (dx + dy) / 2.0;
    return (1.0 / result);
}
