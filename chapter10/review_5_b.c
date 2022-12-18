#include <stdio.h>

int main(void)
{
    int (*ptr)[2];
    int fort[2][2] = { {12}, {14, 16} };

    ptr = fort;

    printf("**ptr = %d\t**(ptr + 1) = %d\n", **ptr, **(ptr + 1));
    //              12                14

    return 0;

}
