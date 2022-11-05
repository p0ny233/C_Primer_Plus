#include <stdio.h>

int main(void)
{
    int n = 4;
    int m = 5;
    float f = 7.0f;
    float g = 8.0f;

    printf("%d\n", n, m);  // args mpre
    printf("%d %d\n", n);  // args less
    printf("%d %d\n", f ,g);  // args type is not match

    return 0;
}
