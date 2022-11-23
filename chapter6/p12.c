#include <stdio.h>

int main(void)
{

    int i,j, item;
    double result;

    scanf("%d", &item);

    for (i = 1; i <= item; i++)
        result += 1.0 / i;
    
    printf("result = %lf\n", result);

    for (result = 0, i = 1; i <= item; i++)
    {
        if (i % 2 != 0)
        {
            result -= 1.0 / i;
            continue;
        }

        result += 1.0 / i;
    }

    printf("result = %lf\n", result);

    return 0;
}
