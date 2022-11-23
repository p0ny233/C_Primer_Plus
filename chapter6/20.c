#include <stdio.h>

double power(double n, int p)
{
    
    double sum;
    int cnt;

    for (sum = n, cnt = 1; cnt < p; cnt++)
    {
        sum *= n;

    }

    return sum;
}


int main(void)
{
    double result;

    result = power(1.2, 12);
    printf("result = %f\n", result);

    return 0;

}
