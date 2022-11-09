#include <stdio.h>
#include <math.h>
double pow_plus(double a, int b)
{

    double result = 2.0;

    while (b > 1)
    {
        result *= 2.0;
        b--;
    }

    return result;
}

int main(void)
{
    int sq = 1;
    

    while (sq < 55  )
    {

        printf("result = %e\n", pow_plus(2, sq)); 
        sq++;
    }

    return 0;

}
