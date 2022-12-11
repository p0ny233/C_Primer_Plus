#include <stdio.h>

void large_of(double, double);

int main(void)
{


    double x, y;

    scanf("%lf %lf", &x, &y);
    printf("x = %f, y = %f\n", x, y);
    large_of(x, y);
    

    

    return 0;

}

void large_of(double x, double y)
{

    x > y ? (y = x) : (x = y);

    printf("x = %f, y = %f\n", x, y);


}
