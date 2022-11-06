#include <stdio.h>
#include <limits.h>
#include <float.h>


void test_dec(void)
{
    int MAX = INT_MAX;
    int MIN = INT_MIN;

    printf("INT_MAX %%d = %d\n", MAX);
    printf("INT_MIN %%d = %d\n", MIN);

    printf("INT_MAX %%u = %u\n", MAX);
    printf("INT_MIN %%u = %u\n", MIN);

}

void test_float(void)
{
    float float_MAX = FLT_MAX;  // invalid
    float float_MIN = FLT_MIN;  // -1.000000

    double double_MAX = DBL_MAX;  
    double double_MIN = DBL_MIN;



    printf("float_MAX = %e\n", float_MAX);
    printf("float_MIN = %e\n", float_MIN);

    float_MAX += 1.0;
    float_MIN -= 1.0;

    printf("float_MAX + 1.0 = %e\n", float_MAX);
    printf("float_MIN - 1.0 = %e\n", float_MIN);
    
    printf("************************************************************\n");


    printf("double_MAX =\n %e\n", double_MAX);
    printf("double_MIN = %e\n", double_MIN);
    
    double_MAX += 1.0;
    double_MIN -= 1.0;

    printf("double_MAX + 1.0 = \n %e\n", double_MAX);
    printf("double_MIN - 1.0 = %e\n", double_MIN);
}

int main(void)
{
    //test_dec();

    test_float();

    return 0;

}
