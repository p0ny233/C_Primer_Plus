#include <stdio.h>

double power(double n, int p)
{
    
    double sum;
    int cnt;
    
    if (n == 0 && p == 0)
    {
        printf("warning : ");
        return 1;
    }

    if (n == 0)
        return 0;

    if (p == 0)
        return 1;

    if (p < 0)
    {
        n = 1 / n;
        p = p * -1;
    }


    for (p > 0, sum = n, cnt = 1; cnt < p; cnt++)
    {
        sum *= n;

    }

    return sum;
}


int main(void)
{
    double result;
    double n;
    int p;
    while (printf("please enter two number: "), scanf("%lf %d", &n, &p) == 2)
    {
    
        result = power(n, p);
        printf("result = %f\n", result);

    }



    return 0;

}
