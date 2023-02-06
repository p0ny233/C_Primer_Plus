#include <stdio.h>

int main(void)
{
    int a = 2;
    int * restrict b = &a;
    int * c = b;

    printf("a = %d  b = %d\n", a, *b);


    return 0;
}
