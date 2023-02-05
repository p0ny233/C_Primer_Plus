#include "test_7_const_keyword.h"
#include <stdio.h>

void test(void)
{
    
    printf("test start\n");
    printf("PI = %f at %p\n", PI, &PI);
    printf("%s at %p\n", *MONTHS, MONTHS);
    printf("test end\n");
}
