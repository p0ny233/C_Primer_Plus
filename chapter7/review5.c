#include <stdio.h>

int main(void)
{

    int i;
    for (i = 1; i <= 11; i++)
    {

        if ( i % 3 == 0)
            putchar('$');
        else 
            putchar('*');
            putchar('#');
        putchar('%');
    }
    putchar('\n');

    return 0;

}
