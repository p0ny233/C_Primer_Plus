#include <stdio.h>

int main(void)
{
    float a, b;

    a = 2.0e20;
    a += 1.0;
    b = a - 2.0e20;
    printf("b = %f\n", b);

    return 0;
}
