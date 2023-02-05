#include <stdio.h>

extern const double PI;
extern const char * MONTHS[];
extern void test1();

int main(void)
{

    test1();

    printf("main start\n");
    printf("PI = %f, &PI = %p\n", PI, &PI);
    printf(" %s at &MONTHS = %p\n", *MONTHS, MONTHS);

    printf("main end\n");

}
