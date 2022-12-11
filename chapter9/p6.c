#include <stdio.h>

void change(double * px, double * py, double * pz);

int main(void)
{
    double x,y,z;

    scanf("%lf %lf %lf", &x, &y, &z);

    printf("x = %f, y = %f, z = %f\n", x, y, z);
    change(&x, &y, &z);
    printf("x = %f, y = %f, z = %f\n", x, y, z);

    return 0;

}

void change(double * px, double * py, double * pz)
{
    double temp;
    if (*px > *py)
    {
        temp = *py;
        *py = *px;
        *px = temp;
    }
    if (*py > *pz)
    {
        temp = *pz;
        *pz = *py;
        *py = temp;

        if (*px > *py)
        {
            temp = *py;
            *py = *px;
            *px = temp;

        }

    }


}
