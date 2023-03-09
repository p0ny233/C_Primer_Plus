#include <stdio.h>
#include <time.h>

int main(void)
{
    clock_t t1, t2;
    int i;
    double d;
    t1 = clock();
    for (i = 0; i < 1000000000; i++);
    t2 = clock();
    d = (t2 - t1) / CLOCKS_PER_SEC;
    printf("sec: %f\n", d);

    return 0;
}
