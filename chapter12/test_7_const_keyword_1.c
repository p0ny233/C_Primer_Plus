#include <stdio.h>

const double PI = 3.14159;
const char * MONTHS[5] = {
"Jan", "Feb", "Mar", "Apr", "May"
};

void test1()
{
    printf("test1 start\n");
    printf("PI = %f, &PI = %p\n", PI, &PI);
    printf(" %s at &MONTHS = %p\n", *MONTHS, MONTHS);

    printf("test1 end\n");
}
