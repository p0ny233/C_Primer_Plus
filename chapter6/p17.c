#include <stdio.h>

int main(void)
{
    
    double m = 1000000.0;
    int i;


    for (i = 1; i < 100; i++)
    {
        m += m * 0.08;
        m -= 100000.0;
        
        if((m < 100000) && (m + m * 0.08) < 100000)
        {

            printf("i = %d\t m = %lf\n", i + 1, m);
            break;
        }
    }

    return 0;

}
