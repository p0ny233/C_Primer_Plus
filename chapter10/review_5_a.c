#include <stdio.h>

int main(void)
{

    int (*ptr)[2];
    int torf[2][2] = {12, 14, 16};
    
    ptr = torf;
    printf("**ptr = %d\t**(ptr + 1) = %d\n", **ptr, **(ptr + 1));
    //              12                16


    return 0;

}
