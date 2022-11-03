#include <stdio.h>

int main(void)
{
    int i = 2147483647; // int value is max 
    unsigned int j = 4294967295;  // unsigned int value is max  

    printf("%d %d %d\n", i ,i + 1 ,i + 2);

    printf("%u %u %u\n", j ,j + 1 ,j + 2);

    return 0;

}
