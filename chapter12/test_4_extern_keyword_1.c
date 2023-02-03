#include <stdio.h>
static int number = 111;

int main(void)
{
    // int number = 444;
    printf("outter block number = %d\n", number);

    {
        extern int number;
        printf("inner block number = %d\n", number);
    }
    return 0;
}
