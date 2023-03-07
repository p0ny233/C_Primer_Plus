#include <stdio.h>

#define EVEN_GT(X, Y) ((X % 2 == 0) && (X > Y) ? 1 : 0)

int main(void)
{

    int a = 2;
    int b = 3;
    printf("result = %d\n", EVEN_GT(a, b));


    return 0;
}
