#include <stdio.h>

struct gas {
    float distance;
    float gals;
    float mpg;
};

float make(struct gas sp);

int main(void)
{

    struct gas sp = {1.1, 2.1, 0};

    sp.mpg = make(sp);

    printf("%f %f %f\n", sp.distance, sp.gals, sp.mpg);
    return 0;
}

float make(struct gas sp)
{
    float mpg = sp.distance + sp.gals;
    return mpg;
}
