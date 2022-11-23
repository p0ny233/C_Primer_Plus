#include <stdio.h>

#define true 1

double func(double a, double b)
{

    double result;

    if (scanf("%lf", &a) && scanf("%lf", &b));

    if (a > b)
        result = (a - b) / (a * b);
    else  

        result = (b - a) / (a * b);

    return result;
}


int main(void)
{

    double a, b;
    while (true)
    {
        printf("%lf\n", func(a, b));
    }

    return 0;

}
