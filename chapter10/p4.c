#include <stdio.h>

int main(void)
{
    int i, index;
    double d[] = {1.2, 4.1, 5.8, 8.3, 3.1, 5.5};
    double temp;

    for (i = 0, temp = 0.0; i < sizeof(d) / sizeof(*d); i++)
        temp = *(d + i) > temp ? index = i, *(d + i) : temp;

    printf("bigger = %f\tpos = %d\n", temp, index);

    return 0;

}
