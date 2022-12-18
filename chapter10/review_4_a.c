#include <stdio.h>

int main(void)
{

    int *ptr;
    int torf[2][2] = { 12, 14, 16};

    ptr = torf[0];
    printf("*ptr = %d \t *(ptr + 2) = %d\n", *ptr, *(ptr + 2));
    //             12                 16       



    return 0;

}
