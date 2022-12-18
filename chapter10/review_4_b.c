#include <stdio.h>

int main(void)
{

    int * ptr;
    int fort[2][2] = { {12}, {14, 16} };
    
    ptr = fort[0];

    printf("*ptr = %d\t *(ptr + 2) = %d\n", *ptr, *(ptr + 2));
    //              12               14

    return 0;

}
