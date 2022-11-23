#include <stdio.h>

int main(void)
{

    double Da = 100;
    double De = 100;

    int i;
    for (i = 1; i < 14455; i++)
    {
        if ( (Da += 100 * 0.1) < (De += De * 0.05))
        {

            printf("i = %d\n", i);
            printf("Da = %lf\nDe = %lf\n", Da, De);
            break;
        }

    }

    return 0;

}
