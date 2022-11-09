#include <stdio.h>

#define oneInLi2Km 1.609
#define oneJiaLun2L 3.785

int main(void)
{
    double inli_num = 100.0 / oneInLi2Km;
    double L = inli_num * oneJiaLun2L;

    printf("100km/%.1fL\n", L);

    return 0;


}
