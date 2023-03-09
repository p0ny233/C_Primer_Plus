#include <stdio.h>
#include <math.h>

int main(void)
{

    int r, x, y;
    double degree;
    printf("input mod:");
    scanf("%d", &r);
    
    printf("input degree:");
    scanf("%lf", &degree);

    x = r * cos(degree); 
    y = r * sin(degree);

    printf("pos x : %d y : %d\n", x, y);

    return 0;
}
