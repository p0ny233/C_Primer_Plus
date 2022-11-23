#include <stdio.h>

int main(void)
{
    
    int f = 5;
    int i, j;

    for (i = 1; f <= 150; i++)
    {
        f -= i;
        f = 2 * f;
        printf("week %d\tf = %d\n", i, f);
    }

    return 0;

}
