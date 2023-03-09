#include <stdio.h>

#define FUNC(X,Y) (1 / ((1.0/X + 1.0/Y) / 2))

int main(void)
{
    int a = 3;
    int b = 4;
    printf("%f\n", FUNC(a,b));
    
    return 0;
}
