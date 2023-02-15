#include <stdio.h>

struct gas {
    float distance;
    float gals;
    float mpg;
};

struct gas make(struct gas sp);


int main(void)
{

    struct gas sp = {1.1, 2.1, 0};

    sp = make(sp);

    printf("%f %f %f\n", sp.distance, sp.gals, sp.mpg);
    return 0;
}

struct gas make(struct gas sp)
{
    sp.mpg = sp.distance + sp.gals;
    return sp;
}
