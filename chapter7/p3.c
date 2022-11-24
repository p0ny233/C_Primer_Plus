#include <stdio.h>

int main(void)
{

    int o_ct, j_ct, o_total, j_total;

    int num;
    o_ct = j_ct = o_total = j_total = 0;

    while (scanf("%d", &num))
    {
        if (num == 0)
            break;

        if (num % 2 == 0)
        {
            o_total += num;
            o_ct++;
        }
        else 
        {
            j_total += num;
            j_ct++;
        }
    }

    printf("o_ct = %d\to_average = %f\nj_ct = %d\tj_average = %f\n", o_ct, (float)o_total / o_ct, j_ct, (float)j_total / j_ct);

    return 0;


}
