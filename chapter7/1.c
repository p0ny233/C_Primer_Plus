#include <stdio.h>

int main(void)
{
    
    double temp;
    int n = 0;
    int all_days = 0;

    while (scanf("%lf", &temp) == 1)
    {

        all_days++;
        if (temp < 0)
            n++;
        
    }

    if (all_days != 0)
        printf("%d days total: %.lf%% were belowe freezing.\n", all_days, 100.0 * n / all_days);
    else
        printf("No data entered\n");
    return 0;

}
