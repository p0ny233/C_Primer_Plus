#include <stdio.h>

#define MAXTITL 40
#define MAXAUTL 30

struct rect {
    double x;
    double y;
};

double rect_area(struct rect r);

int main(void)
{

    double area;

    area = rect_area((struct rect) {10.5, 20.0});

    printf("area = %f\n", area);

    return 0;
}

double rect_area(struct rect r)
{
    return r.x * r.y;
}
