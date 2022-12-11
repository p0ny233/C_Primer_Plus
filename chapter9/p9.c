#include <stdio.h>

double com(double n, int p)
{

    
    double result = n;

    if (n == 0 && p == 0)
        return 1;
    if (n == 0)
        return 0;

    if (p == 0)
        return 1;

    if (p > 1)
        result *= com(n, p - 1);
    else 
        return result;

}

int main(void)
{
    double x;
    int y;

    while (printf("enter two number: "), scanf("%lf %d", &x, &y))
    {
        if (y < 0)
        {
            x = 1.0 / x;
            y = -y;
        }
        printf("result = %f\n", com(x, y));
    }
    return 0;


}
