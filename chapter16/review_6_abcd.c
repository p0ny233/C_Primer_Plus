#include <stdio.h>
#define NUMBER 25 // a
#define SPACE ' ' // b
#define PS() putchar(SPACE) // c
#define BIG(X) (X + 3)  // d
#define SUMSQ(X, Y) (X * X) + (Y * Y)  // e 

int main(void)
{

    int a = NUMBER;
    printf("BIG(X) = %d\n", BIG(a));
    printf("SUMSQ(X,Y) = %d\n", SUMSQ(a, a));

    return 0;
}

