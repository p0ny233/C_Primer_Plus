#include <stdio.h>

#define MIN(X,Y) (X < Y ? X : Y)

int main(void)
{
    int a = 1;
    int b = 2;
    int min = MIN(a, b);

    printf("min = %d\n", min);


    return 0;
}
