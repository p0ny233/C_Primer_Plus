#include "test_7_const_keyword.h"
#include <stdio.h>

extern void test();

int main(void)
{

    test();
    

    printf("main start\n");
    printf("PI = %f at %p\n", PI, &PI);
    printf("%s at %p\n", *MONTHS, MONTHS);
    printf("main end\n");

    return 0;
}
